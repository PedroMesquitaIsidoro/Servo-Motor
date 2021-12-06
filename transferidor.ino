// feito pra verificar o ângulo no transferidor
#include <Servo.h>
int pino = 3;
Servo motor;
int valor = 0;

void setup() {
  motor.attach(pino);
  Serial.begin(9600);
  motor.write(valor);
}

void loop() {
   

  for(int valor = 0; valor<=180; valor)
  {
   motor.write(valor);
   Serial.print("valor lido: ");
   Serial.println(valor);
   delay(8000);
   valor = valor + 5;
  }
}
