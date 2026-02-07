int valor =0;
int valorMapeado =0;
void setup() {
  // Setando o A0 como entrada
  pinMode(A0,INPUT);
  //porta 6 como saída do led
  pinMode(6,OUTPUT);
  //Iniciando o serial
  Serial.begin(9600);
}

void loop() {
  // ler o valor da porta A0
  valor = analogRead(A0);
  //colocando o valor para leitura
  Serial.print(0);
  Serial.print("\t");
  Serial.print(valor);
  Serial.print("\t");
  Serial.println(1024);
  //Mapear o valor até 255
  valorMapeado = map(valor, 0, 1023, 0, 255); //convert to 0-255
  analogWrite(6, valorMapeado); 
}

