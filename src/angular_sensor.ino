#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int Sensor1 = A4;
const int Sensor2 = A3;
const int Sensor3 = A2;
const int Sensor4 = A1;
const int Cal = A0;
 
int Value1 = 0;
int Value2 = 0;
int Value3 = 0;
int Value4 = 0;
int ValueCal = 0;
 
int b1 = 0;
int b2 = 0;
int b3 = 0;
int b4 = 0;
 
int indice = 0;
 
const char* tab[16] {"[0;22.5[          ",
                     "[22.5;45[          ", 
                     "[67.5;90[          ", 
                     "[45;67.5[          ", 
                     "[157.5;180[          ", 
                     "[135;157.5[          ", 
                     "[90;112.5[          ", 
                     "[112.5;135[          ", 
                     "[337.5;360[          ", 
                     "[315;337.5[          ", 
                     "[270;292.5[          ", 
                     "[292.5;315[          ", 
                     "[180;202.5[          ", 
                     "[202.5;225[          ", 
                     "[247.5;270[          ", 
                     "[225;247.5[          "};
const char* tablcd[16] {"[0;22.5[          ",
                     "[22.5;45[          ", 
                     "[67.5;90[          ", 
                     "[45;67.5[          ", 
                     "[157.5;180[          ", 
                     "[135;157.5[          ", 
                     "[90;112.5[          ", 
                     "[112.5;135[          ", 
                     "[337.5;360[          ", 
                     "[315;337.5[          ", 
                     "[270;292.5[          ", 
                     "[292.5;315[          ", 
                     "[180;202.5[          ", 
                     "[202.5;225[          ", 
                     "[247.5;270[          ", 
                     "[225;247.5[          "};

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  ValueCal = analogRead(Cal);
}
 
void loop() {
  Value1 = analogRead(Sensor1);
  Value2 = analogRead(Sensor2);
  Value3 = analogRead(Sensor3);
  Value4 = analogRead(Sensor4);
  Serial.print(ValueCal);
  Serial.print("\n");
  Serial.print(Value1);
  Serial.print("\n");
  Serial.print(Value2);
  Serial.print("\n");
  Serial.print(Value3);
  Serial.print("\n");
  Serial.print(Value4);
  Serial.print("\n");
  Serial.print("\n");
  if(Value1 < (ValueCal + 25)) {
    b1 = 1;
  }
  else{
    b1 = 0;
  }
  if(Value2 < (ValueCal + 25)) {
    b2 = 1;
  }
  else{
    b2 = 0;
  }
  if(Value3 < (ValueCal + 25)) {
    b3 = 1;
  }
  else{
    b3 = 0;
  }
  if(Value4 < (ValueCal + 25)) {
    b4 = 1;
  }
  else{
    b4 = 0;
  }
  Serial.print(b1);
  Serial.print("\t");
  Serial.print(b2);
  Serial.print("\t");
  Serial.print(b3);
  Serial.print("\t");
  Serial.print(b4);
  Serial.print("\t");
  Serial.print("\t");
  Serial.print("\n");
  indice = b4*(1) + b3*(2) + b2*(4) + b1*(8);
  Serial.print(indice);
  Serial.print("\n");
  Serial.print("L'angle est compris dans l'intervale : ");
  Serial.print(tab[indice]);
  Serial.print("\n");
  lcd.print("L'angle : ");
  lcd.setCursor(0, 1);
  lcd.print(tablcd[indice]);
  lcd.setCursor(0, 0);
 
}