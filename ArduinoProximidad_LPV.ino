int TRIG = 3;
int ECHO = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO,INPUT);
  digitalWrite(TRIG,LOW);
}
void loop()
{
  long distancia, tiempo;
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  tiempo = pulseIn(ECHO, HIGH);
  distancia = tiempo / 59;

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  
  delay(200);
}
