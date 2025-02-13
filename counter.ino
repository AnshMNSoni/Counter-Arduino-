#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

int incButton = 6;  
int decButton = 7;  
int incpin = 3;
int decpin = 2;
int counter = 0;     

bool incButtonState = HIGH;
bool lastIncButtonState = HIGH;

bool decButtonState = HIGH;
bool lastDecButtonState = HIGH;

void setup() {
  pinMode(incButton, INPUT_PULLUP); 
  pinMode(decButton, INPUT_PULLUP); 
  
  pinMode(incpin, OUTPUT);
  pinMode(decpin, OUTPUT);

  lcd.begin(16, 2);
  lcd.backlight();    

  String message = "    Welcome to my new Project -> Counter    ";
  int messageLength = message.length();
  
  for (int i = 0; i < messageLength - 19; i++) { 
    lcd.setCursor(0, 0);
    lcd.print(message.substring(i, i + 20));
    delay(200);
    lcd.clear();
  }
  
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Counter: ");
  lcd.setCursor(0, 1);
  lcd.print(counter);
}

void loop() {
  incButtonState = digitalRead(incButton);
  decButtonState = digitalRead(decButton);

  if (incButtonState == LOW && lastIncButtonState == HIGH) {
    counter++; 
    lcd.setCursor(0, 1);
    lcd.print("        ");  
    lcd.setCursor(0, 1);
    lcd.print(counter);
    delay(200);
    digitalWrite(incpin, HIGH);  
  } else {
    digitalWrite(incpin, LOW);
  }

  if (decButtonState == LOW && lastDecButtonState == HIGH) {
    counter--;  
    lcd.setCursor(0, 1);
    lcd.print("        "); 
    lcd.setCursor(0, 1);
    lcd.print(counter);
    delay(200); 
    digitalWrite(decpin, HIGH);  
  } else {
    digitalWrite(decpin, LOW);
  }

  lastIncButtonState = incButtonState;
  lastDecButtonState = decButtonState;
}
