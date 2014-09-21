door sensor
const int doorsensor = 2;
int switchstate;
void setup() {
pinMode(doorsensor,INPUT);
Serial.begin(9600);
}

void loop() 
{
  switchstate = digitalRead(doorsensor);
  Serial.println(switchstate);  
  delay(20);
}


