#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(0, 1, 2, 3, 4, 5);

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("i am rifat");
  // Set the cursor to column 0, line 1
  // (Note: line 1 is the second row, since counting begins with 0)
  lcd.setCursor(0, 1);
  // Print my signature:
  lcd.print("hello");
}

void loop() {
  // Set the cursor to column 14, line 1
  lcd.setCursor(14, 1);
  // Print the number of seconds since the start of the simulation:
  lcd.print(millis() / 1000);
  delay(100); // Delay to improve simulation performance
}
