#include <DHT.h>

#define DHTPIN 2          // DHT11 data pin connected to D2
#define DHTTYPE DHT11     // DHT11 sensor

#define RAIN_SENSOR A0    // Rain sensor analog pin
#define MQ2_SENSOR A1     // MQ2 gas sensor analog pin
#define SOIL_SENSOR A2    // Soil moisture sensor analog pin

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  dht.begin();
  delay(2000);
  Serial.println("🌐 Smart Agriculture Monitoring Started...");
}

void loop() {
  // DHT11 - Temp and Humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Rain Sensor
  int rainValue = analogRead(RAIN_SENSOR);
  String rainStatus = (rainValue < 400) ? "Rain Detected" : "No Rain";

  // MQ2 Sensor
  int gasValue = analogRead(MQ2_SENSOR);

  // Soil Moisture Sensor
  int soilValue = analogRead(SOIL_SENSOR);
  String soilStatus = (soilValue < 500) ? "Soil Wet" : "Soil Dry";

  // Output to Serial Monitor
  Serial.println("============== Sensor Data ==============");
  Serial.print("🌡️ Temperature: "); Serial.print(temperature); Serial.println(" °C");
  Serial.print("💧 Humidity: "); Serial.print(humidity); Serial.println(" %");
  Serial.print("🌧️ Rain Status: "); Serial.println(rainStatus);
  Serial.print("🔥 Gas Level (MQ2): "); Serial.println(gasValue);
  Serial.print("🌱 Soil Moisture: "); Serial.print(soilValue); Serial.print(" - "); Serial.println(soilStatus);
  Serial.println("=========================================");
  Serial.println();

  delay(3000); // wait 3 seconds before next reading
}