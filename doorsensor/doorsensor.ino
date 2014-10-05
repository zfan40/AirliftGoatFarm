//door sensor
const int doorsensorPin = 2;
int switchstate;//0 for close, 1 for open
int pastValue = 1;
int count = 0 ;
void setup() {
pinMode(doorsensorPin,INPUT);
Serial.begin(9600);
}


void loop() 
{
  switchstate = digitalRead(doorsensorPin);
  if (count<=4) {
    switchstate = switchstate*pastValue;  
    pastValue = switchstate;
    count+=1;
  }
  else {
    count = 0;
    Serial.println(switchstate*pastValue); 
    pastValue = 1;
  }
  delay(20);
}


