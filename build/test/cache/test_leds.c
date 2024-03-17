#include "/var/lib/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"
#include "inc/leds.h"


static uint16_t leds_virtuales;

static const int LED = 3;



void setUp(void) { leds_init(&leds_virtuales); }









void test_todos_los_leds_inician_apagados(void) {





  uint16_t leds_virtuales = 0xFF;

  leds_init(&leds_virtuales);

  UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_virtuales)), (

 ((void *)0)

 ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_UINT16);

}









void test_prender_un_led(void) {





  leds_turn_on(LED);



  UnityAssertBits((UNITY_INT)(((UNITY_UINT)1 << (LED - 1))), (UNITY_INT)((UNITY_UINT)(-1)), (UNITY_INT)((leds_virtuales)), (

 ((void *)0)

 ), (UNITY_UINT)(37));



  UnityAssertBits((UNITY_INT)((~(1 << (LED - 1)))), (UNITY_INT)((UNITY_UINT)(0)), (UNITY_INT)((leds_virtuales)), (

 ((void *)0)

 ), (UNITY_UINT)(39));

}







void test_apagar_un_led(void) {



  leds_init(&leds_virtuales);

  leds_turn_on(LED);



  leds_turn_off(LED);



  UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((0x00)), (UNITY_INT)(UNITY_UINT16)((leds_virtuales)), (

 ((void *)0)

 ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_UINT16);

}







void test_apagar_y_prender_varios_leds(void) {



  leds_turn_on(5);

  leds_turn_on(7);

  leds_turn_on(5);

  leds_turn_off(5);

  leds_turn_off(9);



  UnityAssertEqualNumber((UNITY_INT)(UNITY_UINT16)((1 << (7 - 1))), (UNITY_INT)(UNITY_UINT16)((leds_virtuales)), (

 ((void *)0)

 ), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_UINT16);

}
