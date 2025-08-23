#define pinSensorA A0
#define pinSensorB A1
#define pinSensorC A2
#define pinSensorD A3

#define pinRele1 3
#define pinRele2 4
#define pinRele3 5
#define pinRele4 6

bool valor1 = false;
bool valor2 = false;
bool valor3 = false;
bool valor4 = false;

void setup() {

  pinMode(pinRele1, OUTPUT);
  pinMode(pinRele2, OUTPUT);
  pinMode(pinRele3, OUTPUT);
  pinMode(pinRele4, OUTPUT);
  Serial.begin(9600);
}

void loop() {

   Serial.print("  Analogico: ");
   Serial.print(analogRead(pinSensorA));
   Serial.print(" ");
   Serial.print(analogRead(pinSensorB));
   Serial.print(" ");
   Serial.print(analogRead(pinSensorC));
   Serial.print(" ");
   Serial.print(analogRead(pinSensorD));
   Serial.print(" ");
   Serial.print("\n");

   if (analogRead(pinSensorA) < 900) {
      valor1 = true;
   }
   if (analogRead(pinSensorB) < 900) {
      valor2 = true;
   }
   if (analogRead(pinSensorC) < 900) {
      valor3 = true;
   }
   if (analogRead(pinSensorD) < 900) {
      valor4 = true;
   }
   

  digitalWrite(pinRele1, valor1 ? HIGH : LOW);
  digitalWrite(pinRele2, valor2 ? HIGH : LOW);
  digitalWrite(pinRele3, valor3 ? HIGH : LOW);
  digitalWrite(pinRele4, valor4 ? HIGH : LOW);

}


