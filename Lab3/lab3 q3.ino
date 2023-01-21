void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  Serial.begin(9600);

}

void loop() {
  //When input is HIGH, print"Hello World"
  if(digitalRead(0)==HIGH)
    Serial.println("Hello World");
  
  //When input is LOW, print"It's 2023"
  if(digitalRead(0) == LOW)
    Serial.println("It's 2023");

}