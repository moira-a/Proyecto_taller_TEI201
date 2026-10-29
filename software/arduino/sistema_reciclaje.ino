const int SENSOR = 2;
const int LED = 7;
const int LED_TAPA = 8;
const int BUZZER = 10;

void setup() {
  pinMode(SENSOR, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(LED_TAPA, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int estadoSensor = digitalRead(SENSOR);

  if (estadoSensor == LOW) {
    digitalWrite(LED, HIGH);
    digitalWrite(LED_TAPA, HIGH);
    tone(BUZZER, 2000);
  } else {
    digitalWrite(LED, LOW);
    digitalWrite(LED_TAPA, LOW);
    noTone(BUZZER);
  }
}
