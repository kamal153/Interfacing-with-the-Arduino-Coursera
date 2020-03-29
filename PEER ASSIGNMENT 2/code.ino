#define LED_PIN    7
#define SENSOR_PIN A2

#define BRIGHTNESS_THRESHOLD 90

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  int state = (sensorValue <= BRIGHTNESS_THRESHOLD) ? HIGH : LOW;
  Serial.print("Led status : ");
  Serial.println(state);
  digitalWrite(LED_PIN, state);
}