@@ -1,4 +1,4 @@
﻿#ifndef  CANDLES_H
#ifndef  CANDLES_H
#define  CANDLES_H

пустые  свечи () {
  если ( KolLed >= 10 ) {
#if  MAX_LEDS  <  255
    uint8_t  х ;
#еще
    uint16_t  х ;
#endif
    для ( x  =  0 ; x  <  KolLed ; x ++ )
    {
#if  CANDLE_40  ==  1
      //Вариант ефимова1969
      uint8_t  мерцание  =  случайный8 ( 1 , 80 );
      светодиоды [ x ] =  CRGB ( 255  —  мерцание  *  2 , 150  —  мерцание , мерцание / 2 );
#еще
      uint8_t  мерцание  =  случайный8 ( 1 , 15 );
      светодиоды [ x ] =  CRGB ( 255  —  мерцание  *  2 , 63  —  мерцание , мерцание / 2 );
#endif
    }
  }
