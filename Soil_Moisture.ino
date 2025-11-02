const int moisturePin = 2;

int dryValue = 0;
int wetValue = 4095;

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32 Moisture Sensor with Auto-Calibration");
  Serial.println("Place sensor in air for dry calibration...");
  delay(5000);
  
  // Dry calibration
  dryValue = analogRead(moisturePin);
  Serial.print("Dry calibration value: ");
  Serial.println(dryValue);
  
  Serial.println("Now place sensor in water for wet calibration...");
  delay(5000);
  
  // Wet calibration
  wetValue = analogRead(moisturePin);
  Serial.print("Wet calibration value: ");
  Serial.println(wetValue);
  
  Serial.println("Calibration complete!");
  delay(1000);
}

void loop() {
  int moistureValue = analogRead(moisturePin);
  int moisturePercent = map(moistureValue, dryValue, wetValue, 0, 100);
  moisturePercent = constrain(moisturePercent, 0, 100);
  
  Serial.print("Raw: ");
  Serial.print(moistureValue);
  Serial.print(" | Moisture: ");
  Serial.print(moisturePercent);
  Serial.println("%");
  
  delay(1000);
}