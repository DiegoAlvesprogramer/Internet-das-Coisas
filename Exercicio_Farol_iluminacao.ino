// C++ code
//
/*
  This program blinks pin 12 of the Arduino (the
  built-in LED)
*/
#define LedVM	12 // define um nome por outro
#define LedAM	9 // define um nome por outro
#define LedVD	6  // define um nome por outro
#define ON		HIGH
#define OFF		LOW
int tempo=1000; // variável (memória) = 1000

void setup()
{
  pinMode(LedVM, OUTPUT); // coloca o pino do arduino como saída
  pinMode(LedAM, OUTPUT); // coloca o pino do arduino como saída
  pinMode(LedVD, OUTPUT); // coloca o pino do arduino como saída
}

void loop()
{

  digitalWrite(LedVM, ON); // acende o led vermelho
  delay(tempo); // Wait for 1000 millisecond(s)
  digitalWrite(LedVM, OFF); // apago led vermelho
  delay(tempo); // Wait for 1000 millisecond(s)
  
  digitalWrite(LedAM, ON); // acende o led amarelo
  delay(tempo); // Wait for 1000 millisecond(s)
  digitalWrite(LedAM, OFF); // apaga led amarelo
  delay(tempo); // Wait for 1000 millisecond(s)
  
   digitalWrite(LedVD, ON); // acende o led verde
  delay(tempo); // Wait for 1000 millisecond(s)
  digitalWrite(LedVD, OFF); // apaga led verde
  delay(tempo); // Wait for 1000 millisecond(s)
}