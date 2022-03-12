// C++ code
//
/*
  This program blinks pin 12 of the Arduino (the
  built-in LED)
*/
#define LedVM	10,8 // define um nome por outro
#define LedAM	12,7 // define um nome por outro
#define LedVD	13,6  // define um nome por outro
#define ON		HIGH
#define OFF		LOW
int tempo=1000; // variável (memória) = 1000

void setup()
{
  pinMode(10, OUTPUT); // coloca o pino do arduino como saída
  pinMode(12, OUTPUT); // coloca o pino do arduino como saída
  pinMode(13, OUTPUT); // coloca o pino do arduino como saída
  pinMode(8, OUTPUT); // coloca o pino do arduino como saída
  pinMode(6, OUTPUT); // coloca o pino do arduino como saída
  pinMode(3, OUTPUT); // coloca o pino do arduino como saída
}

void loop()
{

  digitalWrite(10, ON); // acende o led vermelho
  digitalWrite(3, ON); // acende o led verde
  delay(tempo); // Wait for 1000 millisecond(s)
  digitalWrite(3, OFF); // apaga led verde
  digitalWrite(10, OFF); // apago led vermelho
  delay(tempo); // Wait for 1000 millisecond(s)
  
  digitalWrite(6, ON); // acende o led amarelo
  digitalWrite(12, ON); // acende o led amarelo
  delay(tempo); // Wait for 1000 millisecond(s)
  digitalWrite(6, OFF); // apaga led amarelo
  digitalWrite(12, OFF); // apago led vermelho
  delay(tempo); // Wait for 1000 millisecond(s)
 
  
  digitalWrite(13, ON); // acende o led vermelho
  digitalWrite(8, ON); // acende o led verde
  delay(tempo); // Wait for 1000 millisecond(s)
  digitalWrite(13, OFF); // apaga led vermelho
  digitalWrite(8, OFF); // apaga led verde
  delay(tempo); // Wait for 1000 millisecond(s)
}
