const int buzzer = 2;
const int vibrationSensor = 3;

int vibrationSensorState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(vibrationSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  vibrationSensorState = digitalRead(vibrationSensor);
  if(vibrationSensorState == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }
}
