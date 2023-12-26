@@ -1,4 +1,4 @@
﻿#ifndef  FIRE_H
#ifndef  FIRE_H
#define  FIRE_H

void  fire () {                                          // Вызов fill_rainbow не поддерживает уровни яркости
  если ( KolLed >= 10 ) {
#if  MAX_LEDS  <  255
    uint8_t  x  =  KolLed / 10 ;                          // Координаты
    uint8_t  k1  =     random8 ( x  *  2 );         //Жар
    uint8_t  k2  =     случайный8 ( x  *  2 ) +  k1 ;    //Огонь
    uint8_t  k3  =  x  *  3  +  random8 ( x  *  4 );    //Пламя
    uint8_t  k4  =  КолЛед  -  1 ;                //Дым
    если (( k4  -  k2 ) <  k3 ) k3  =  k4 ;
    иначе  k3  =  k3  +  k2 ;
#еще
    uint16_t  x  =  KolLed / 10 ;
    uint16_t  k1  =       случайный8 ( х  *  2 );       //Жар
    uint16_t  k2  =       случайный8 ( x  *  2 ) +  k1 ;  //Огонь
    uint16_t  k3  =  x  *  3  +  случайный8 ( x  *  4 ) +  k2 ; //Пламя
    uint16_t  k4  =  КолЛед  -  1 ;                //Дым
#endif
