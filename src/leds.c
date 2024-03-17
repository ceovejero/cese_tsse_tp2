#include "leds.h"

#define BIT_HIGH 1
#define LED_OFFSET 1
#define ALL_LED_OFF 0x00

static uint16_t led_to_mask(int led) { return (1 << (led - 1)); }

static uint16_t *puntero;
void leds_init(uint16_t *puerto) {
  puntero = puerto;
  *puntero = 0x00;
}

void leds_turn_on(int led) {

  //
  //*puntero = 4;
  *puntero |= (1 << (led - 1));
}

void leds_turn_off(int led) {

  //
  //*puntero = 0x00;
  *puntero &= ~(1 << (led - 1));
}