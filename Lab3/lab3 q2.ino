void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(0)==HIGH):
    serial.println("Hellow World");
  else:
    serial.println("It's 2023");

}
