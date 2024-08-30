#include <Arduino.h>
#include "avr8-stub.h"
#include "app_api.h"

int pinoLed = 11;
int incremento = 5;
int decremento = 5;

void setup() {
  debug_init();

  pinMode(11, OUTPUT);            // Define a porta 11 como saida
}

void loop() {
 
 
  //----------------Aumenta o brilho usando o laco for----------------
 
  for (byte valor = 0; valor < 255; valor+=incremento) {             // Repete os comandos dentro das chaves 255 vezes
 
    analogWrite(pinoLed, valor);                                     // Controla o brilho no pino do LED
     
    delay(30);                                                       // Aguarda 30 milissegundos
 
  }
 
 
  //----------------Diminui o brilho usando o laco for----------------
 
  for (byte valor = 255; valor >0; valor-=decremento) {              // Repete os comandos dentro das chaves 255 vezes
     
    analogWrite(pinoLed, valor);                                     // Controla o brilho no pino do LED
 
    delay(30);                                                       // Aguarda 30 milissegundos
 
  }
 
}
