#include <DHT.h>
#include <LiquidCrystal.h>

// Pin Definitions
#define DHTPIN 2       // Pin connected to DHT11 DATA
#define DHTTYPE DHT11  // Define DHT11 type

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// LCD Pins (4-bit mode)
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);  // RS, E, D4, D5, D6, D7

void setup() {
  lcd.begin(16, 2);          // Initialize LCD with 16x2 display
  dht.begin();              // Start the DHT sensor
  lcd.print("Humidity & Temp");
  delay(2000); // Wait for the screen to display the header
}

void loop() {
  float temp = dht.readTemperature();  // Read temperature in Celsius
  float hum = dht.readHumidity();     // Read humidity percentage

  // Check if readings failed and display an error
  if (isnan(temp) || isnan(hum)) {
    lcd.clear();
    lcd.print("Failed to read");
    lcd.setCursor(0, 1);
    lcd.print("from DHT sensor!");
    return;
  }

  // Display temperature and humidity
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(hum);
  lcd.print(" %");

  delay(2000);  // Wait 2 seconds before updating
}
