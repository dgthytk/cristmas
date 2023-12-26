@@ -1,4 +1,4 @@
﻿#ifndef  BLENDWARE_H
#ifndef  BLENDWARE_H
#define  BLENDWARE_H

пустота  blendwave () {
  CRGB  clr1 ;
  CRGB  clr2 ;
  uint8_t  скорость ;
  uint8_t  loc1 ;
  если ( KolLed >= 10 ) {
    скорость  =  удары8 ( 6 , 0 , 255 );
    clr1  =  blend ( CHSV ( beatsin8 ( 3 , 0 , 255 ), 255 , 255 ), CHSV ( beatsin8 ( 4 , 0 , 255 ), 255 , 255 ), скорость );
    clr2  =  blend ( CHSV ( beatsin8 ( 4 , 0 , 255 ), 255 , 255 ), CHSV ( beatsin8 ( 3 , 0 , 255 ), 255 , 255 ), скорость );
#if  MAX_LEDS  <  255
    loc1  =  Beatsin8 ( 10 , 0 , KolLed  -  1 );
#еще
    loc1  =  Beatsin16 ( 10 , 0 , KolLed  -  1 );
#endif
    fill_gradient_RGB ( светодиоды , 0 , clr2 , loc1 , clr1 );
    fill_gradient_RGB ( leds , loc1 , clr2 , KolLed  -  1 , clr1 );
  }




