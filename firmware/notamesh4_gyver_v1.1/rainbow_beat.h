@@ -1,4 +1,4 @@
﻿#ifndef  RAINBOW_BEAT_H
#ifndef  RAINBOW_BEAT_H
#define  RAINBOW_BEAT_H

// Использование - Rainbow_beat();
void  Rainbow_beat () {                                          // Вызов fill_rainbow не поддерживает уровни яркости
  если ( KolLed >= 10 ) {
    uint8_t  BeatA  =  Beatsin8 ( 17 , 0 , 255 );                        // Начальный оттенок
    uint8_t  BeatB  =  Beatsin8 ( 13 , 0 , 255 );
    fill_rainbow ( leds , KolLed , ( beatA  +  BeatB )/ 2 , 8 );        // Используйте процедуру fill_rainbow FastLED.
  }
} // Rainbow_beat()
#endif
