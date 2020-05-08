float pulseDuration = 0.0;
const int buttonPin = 2;
const int relay = 3;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pulseDuration = analogRead(A0)*(5.0/1023.0);
  buttonState = digitalRead(buttonPin);
  Serial.print("Pulse Duration: ");
  Serial.print(pulseDuration);
  Serial.println(" ms");
  if(buttonState == HIGH){
    digitalWrite(relay, HIGH);
    delay(pulseDuration);
    digitalWrite(relay, LOW);
  }
}
