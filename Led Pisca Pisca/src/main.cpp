#include <Arduino.h>
#include "avr8-stub.h"
#include "app_api.h"

void setup() {
  debug_init();

  pinMode(11, OUTPUT);            // Define a porta 11 como saida
}

void loop() {
  digitalWrite(11, HIGH);         // Acende o led
 
  delay(1000);                    // Aguarda intervalo de tempo entre parenteses em milissegundos
 
  digitalWrite(11, LOW);          // Apaga o led
 
  delay(1000);                    // Aguarda intervalo de tempo entre parenteses em milissegundos
}
