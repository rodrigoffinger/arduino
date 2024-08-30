#include <Arduino.h>
#include "avr8-stub.h"
#include "app_api.h"

int pinoLed = 11;

void setup() {
  debug_init();

  pinMode(11, OUTPUT);            // Define a porta 11 como saida
}

void loop() {
  //----------------S(...) tres pontos----------------
 
  for(int x=0; x<3 ; x++) {            // Repete os comandos dentro das chaves 3 vezes
 
    digitalWrite(pinoLed,HIGH);        // Acende o LED   
 
    delay(150);                        // Aguarda 150 milissegundos
 
    digitalWrite(pinoLed,LOW);         // Desliga o LED
 
    delay(150);                        // Aguarda 150 milissegundos
 
  }
    
  delay(200);                          // Aguarda 200 milissegundos entre as letras
        
 
  //----------------O(---) tres linhas----------------
 
  for(int x=0; x<3; x++) {             // Repete os comandos dentro das chaves 3 vezes
 
    digitalWrite(pinoLed,HIGH);        // Acende o LED
 
    delay(450);                        // Aguarda 450 milissegundos
 
    digitalWrite(pinoLed,LOW);         // Desliga o LED
 
    delay(150);                        // Aguarda 150 milissegundos
 
  }
  
  delay(200);                          // Aguarda 200 milissegundos entre as letras
        
 
  //----------------S(...) tres pontos----------------
 
  for(int x=0; x<3; x++) {             // Repete os comandos dentro das chaves 3 vezes
 
    digitalWrite(pinoLed,HIGH);        // Acende o LED
 
    delay(150);                        // Aguarda  150 milissegundos
 
    digitalWrite(pinoLed,LOW);         // Desliga o LED
 
    delay(150);                        // Aguarda 150 milissegundos
 
  }
  
  delay(5000);                         // Aguarda 5000 milissegundos (5 segundos)
}
