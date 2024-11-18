void setup() {
  pinMode(8, OUTPUT);

}

void loop() {
      digitalWrite(8, HIGH); // sets the digital pin 13 on
      delay(100);            // waits for a second
      digitalWrite(8, LOW);  // sets the digital pin 13 off
      delay(100);            // waits for a second
      digitalWrite(8, HIGH); // sets the digital pin 13 on
      delay(100);            // waits for a second
      digitalWrite(8, LOW);  // sets the digital pin 13 off
      delay(1000);            // waits for a second
}
