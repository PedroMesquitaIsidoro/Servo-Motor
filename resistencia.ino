#define pot A0
double nominal = 10000; // o valor nominal do nosso potenciometro eh 10k
double resistencia; // desconhecemos, vamos encontrar
double valor_pot; // vai receber o valor do pot (0 - 1023)
int giro_pot; // porcentagem do giro
double tensao;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  valor_pot = analogRead(pot);
  giro_pot = map(valor_pot, 0, 1023, 0, 100);
  tensao = valor_pot * (5.0 / 1023.0);
  resistencia = (tensao * nominal) / 5;
  Serial.print("A resistencia eh: ");
  Serial.print(resistencia);
  Serial.print(" ohms ");
  Serial.print("A tensao lida eh: ");
  Serial.print(tensao);
  Serial.print(" v ");
  Serial.print("O giro em porcentagem: ");
  Serial.print(giro_pot);
  Serial.println("% ");
  delay(1000);
 }
