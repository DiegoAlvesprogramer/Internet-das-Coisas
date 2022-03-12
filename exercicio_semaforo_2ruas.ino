// C++ code
//
/*
  Projeto de semaforo de 2 ruas
*/
#define LedVM	10 // define um nome por outro
#define LedAM	12 // define um nome por outro
#define LedVD	13 // define um nome por outro
#define LEDVM	8 // define um nome por outro
#define LEDAM	6 // define um nome por outro
#define LEDVD	3 // define um nome por outro
#define ON		HIGH
#define OFF		LOW
int tempo=1000; // variável (memória) = 1000

void setup()
{
  pinMode(LedVM, OUTPUT); // coloca o pino do arduino como saída
  pinMode(LedAM, OUTPUT); // coloca o pino do arduino como saída
  pinMode(LedVD, OUTPUT); // coloca o pino do arduino como saída
  pinMode(LEDVM, OUTPUT); // coloca o pino do arduino como saída
  pinMode(LEDAM, OUTPUT); // coloca o pino do arduino como saída
  pinMode(LEDVD, OUTPUT); // coloca o pino do arduino como saída
}

void loop()
{
  
  digitalWrite(LedVM, ON); // acende o led vermelho
  digitalWrite(LEDVD, ON); // acende o led vermelho
  delay(tempo); // Tempo de 1000 milisegundos
  digitalWrite(LedVM, OFF); // apago led vermelho
  digitalWrite(LEDVD, OFF); // apago led vermelho
  delay(tempo); // Tempo de 1000 milisegundos
  
  digitalWrite(LedAM, ON); // acende o led vermelho
  digitalWrite(LEDAM, ON); // acende o led vermelho
  delay(tempo); // Tempo de 1000 milisegundos
  digitalWrite(LedAM, OFF); // apago led vermelho
  digitalWrite(LEDAM, OFF); // apago led vermelho
  delay(tempo); // Tempo de 1000 milisegundos
  
  digitalWrite(LEDVM, ON); // acende o led vermelho
  digitalWrite(LedVD, ON); // acende o led vermelho
  delay(tempo); // Tempo de 1000 milisegundos
  digitalWrite(LEDVM, OFF); // apago led vermelho
  digitalWrite(LedVD, OFF); // apago led vermelho
  delay(tempo); // Tempo de 1000 milisegundos
  
}
