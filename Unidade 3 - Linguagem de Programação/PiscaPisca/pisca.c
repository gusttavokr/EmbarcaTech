#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define led_vermelho 2
#define led_verde 9
#define led_amarela 5

// Função para definir o estado dos LEDs
void set_cor_led(bool R, bool G, bool A) {
  gpio_put(led_vermelho, R);
  gpio_put(led_verde, G);
  gpio_put(led_amarela, A);
}

int main() {
  stdio_init_all();
    // Definindo a posição dos LEDs no microcontrolador

    // Inicializando os pinos como GPIO
  gpio_init(led_vermelho);
  gpio_init(led_verde);
  gpio_init(led_amarela);

    // Definindo os pinos como saídas
  gpio_set_dir(led_vermelho, true);
  gpio_set_dir(led_verde, true);
  gpio_set_dir(led_amarela, true);

    // Inicializando os estados dos LEDs como desligados
    // bool R = false;
    // bool G = false;
    // bool A = false;

  while (true) {
        // Atualiza o estado dos LEDs
    set_cor_led(true, false, false);
    sleep_ms(500);
    set_cor_led(false, true, false);
    sleep_ms(200);
    set_cor_led(false, false, true);
    sleep_ms(500);
  }

  return 0; // Este ponto nunca será alcançado devido ao loop infinito
}