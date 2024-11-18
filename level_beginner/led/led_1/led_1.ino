void setup() {
  pinMode(8, OUTPUT);

}

void loop() {
      digitalWrite(8, HIGH); // sets the digital pin 13 on
      delay(500);            // waits for a second
      digitalWrite(8, LOW);  // sets the digital pin 13 off
      delay(500);            // waits for a second
}
