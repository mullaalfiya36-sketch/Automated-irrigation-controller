const int soilMoisturePin = 4;
const int relayPin = 5;

const int dryThreshold = 2000;

unsigned long previousMillis = 0;
const unsigned long interval = 1000;  // Read sensor every 1 second

void setup() {
  Serial.begin(115200);

  pinMode(relayPin, OUTPUT);

  // Relay OFF initially
  digitalWrite(relayPin, HIGH);

  Serial.println("Automated Irrigation Controller");
  Serial.println("--------------------------------");
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {

    previousMillis = currentMillis;

    int moistureValue = analogRead(soilMoisturePin);

    Serial.print("Soil Moisture Value: ");
    Serial.println(moistureValue);

    if (moistureValue < dryThreshold) {

      // Soil is dry
      digitalWrite(relayPin, HIGH);

      Serial.println("SOIL DRY -> WATER PUMP ON");

    } else {

      // Soil is sufficiently wet
      digitalWrite(relayPin, LOW);

      Serial.println("SOIL WET -> WATER PUMP OFF");
    }

    Serial.println("--------------------------------");
  }
}