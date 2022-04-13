#ifndef _PUSH_H
#define _PUSH_H


#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include<time.h>

#define TRUE         1
#define FALSE         0

#define CAN_MOVE      1
#define CANNOT_MOVE      0
#define CAN_FINISH      1
#define CANNOT_FINISH   0

#define SIZE_MAP_ROW   16
#define SIZE_MAP_COL   23

#define Display_MAP_ROW   5
#define Display_MAP_COL   27

#define ICON_EMPTY        1
#define ICON_WALL         2
#define ICON_BLOCK        3
#define ICON_TARGET       4
#define ICON_USER         5
#define ICON_WALL2        6

#define KEY_UP            72
#define KEY_DOWN         80
#define KEY_LEFT         75
#define KEY_RIGHT         77


typedef struct _Position {
   int row;
   int col;
} Position;

 
void   showGame();
int    getKey();
void   init_A();
void   init_B();
void   init_C();
int    checkMove();
void   move();
int    checkFinish();
void   display();

#endif
