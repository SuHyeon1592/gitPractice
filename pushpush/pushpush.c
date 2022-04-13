#include "ch21.h"

extern int         displayMap[Display_MAP_ROW][Display_MAP_COL];
extern int         originalMap[SIZE_MAP_ROW][SIZE_MAP_COL];
extern int         originalMap_STAGE_1[SIZE_MAP_ROW][SIZE_MAP_COL];
extern int         originalMap_STAGE_2[SIZE_MAP_ROW][SIZE_MAP_COL];
extern int         originalMap_STAGE_3[SIZE_MAP_ROW][SIZE_MAP_COL];
extern int         inputKey;
extern int         playground[SIZE_MAP_ROW][SIZE_MAP_COL];
extern Position      player; //플레이어의 현위치
extern Position      tp; //target_player(플레이어가 이동할 위치)
extern Position      tb; //target_block(블록이 이동할 위치)
extern char level;

int getKey() {

   int key;
   key = getch();
   if(key == 224) key = getch();

   return key;
}


void showGame() {

   int i,k;

   system("cls");

   for(i=0;i<SIZE_MAP_ROW;i++) {
      for(k=0;k<SIZE_MAP_COL;k++) {
         switch(playground[i][k]) {
         case ICON_WALL:
            printf("■");
            break;
         case ICON_EMPTY:
            printf("  ");
            break;
         case ICON_USER:
            printf("◎");
            break;
         case ICON_BLOCK:
            printf("★");
            break;
         case ICON_TARGET:
            printf("☆");
            break;
		case ICON_WALL2:
            printf("▨");
            break;
         default:
            break;
         }
      }
      printf("\n");
   }
  // printf("player (%d,%d)\n",player.row,player.col);
}

void display(){

   int i,k;

   for(i=0;i<Display_MAP_ROW;i++) {
      for(k=0;k<Display_MAP_COL;k++) {
         switch(displayMap[i][k]) {
         case NULL:
            printf("  ");
            break;
		case ICON_WALL2:
            printf("▨");
            break;
         default:
            break;
         }
      }
      printf("\n");
   }
  // printf("player (%d,%d)\n",player.row,player.col);
}	

void init_A() {
      int i,k;

      for(i=0;i<SIZE_MAP_ROW;i++) {
         for(k=0;k<SIZE_MAP_COL;k++) {
            playground[i][k]=originalMap_STAGE_1[i][k];
            if(playground[i][k] == ICON_USER) {
               player.row = i;
               player.col = k;
            }
         }
      }
}

void init_B() {
      int i,k;

      for(i=0;i<SIZE_MAP_ROW;i++) {
         for(k=0;k<SIZE_MAP_COL;k++) {
            playground[i][k]=originalMap_STAGE_2[i][k];
            if(playground[i][k] == ICON_USER) {
               player.row = i;
               player.col = k;
            }
         }
      }
}

void init_C() {
      int i,k;

      for(i=0;i<SIZE_MAP_ROW;i++) {
         for(k=0;k<SIZE_MAP_COL;k++) {
            playground[i][k]=originalMap_STAGE_3[i][k];
            if(playground[i][k] == ICON_USER) {
               player.row = i;
               player.col = k;
            }
         }
      }
}


int checkMove() {

   tp = player;
   switch(inputKey) {
   case KEY_UP:
      tp.row -=1;
      tb = tp;
      if(playground[tp.row][tp.col] == ICON_BLOCK) {
         tb.row -= 1;
      }
      break;
   case KEY_DOWN:
      tp.row +=1;
      tb = tp;
      if(playground[tp.row][tp.col] == ICON_BLOCK) {
         tb.row += 1;
      }
      break;
   case KEY_LEFT:
      tp.col -=1;
      tb = tp;
      if(playground[tp.row][tp.col] == ICON_BLOCK) {
         tb.col -= 1;
      }
      break;
   case KEY_RIGHT:
      tp.col +=1;
      tb = tp;
      if(playground[tp.row][tp.col] == ICON_BLOCK) {
         tb.col += 1;
      }
      break;
   default:
      break;
   }
   if(playground[tb.row][tb.col] == ICON_EMPTY || 
      playground[tb.row][tb.col] == ICON_TARGET) {
         return CAN_MOVE;
   }
   return CANNOT_MOVE;
}

void move() {
   

   playground[tb.row][tb.col] = playground[tp.row][tp.col];			  //이
   playground[tp.row][tp.col] = playground[player.row][player.col];   //이동을 시키고
   playground[player.row][player.col] = ICON_EMPTY;					 //이동을 한 곳엔 원래대로 빈 자리 

   switch(level){
   case 'A':
	   if(originalMap_STAGE_1[player.row][player.col] == ICON_TARGET){
        playground[player.row][player.col] = ICON_TARGET;
	   }
   break;
   case 'B':
	   if(originalMap_STAGE_2[player.row][player.col] == ICON_TARGET){
        playground[player.row][player.col] = ICON_TARGET;
	   }
   break;
   case 'C':
	   if(originalMap_STAGE_3[player.row][player.col] == ICON_TARGET){
        playground[player.row][player.col] = ICON_TARGET;
	   }
   break;
   }
   player = tp;
}

int checkFinish() {
    int i,k;
    switch(level){	
	case 'A':
	    for(i=0;i<SIZE_MAP_ROW;i++) {
	        for(k=0;k<SIZE_MAP_COL;k++) {
                if(originalMap_STAGE_1[i][k] == ICON_TARGET) {
                    if(playground[i][k] != ICON_BLOCK) {
                        return CANNOT_FINISH;
					}
				}
			}
		}
		break;
	case 'B':
	    for(i=0;i<SIZE_MAP_ROW;i++) {
	        for(k=0;k<SIZE_MAP_COL;k++) {
                if(originalMap_STAGE_2[i][k] == ICON_TARGET) {
                    if(playground[i][k] != ICON_BLOCK) {
                        return CANNOT_FINISH;
					}
				}
			}
		}
		break;
	case 'C':
	    for(i=0;i<SIZE_MAP_ROW;i++) {
	        for(k=0;k<SIZE_MAP_COL;k++) {
                if(originalMap_STAGE_3[i][k] == ICON_TARGET) {
                    if(playground[i][k] != ICON_BLOCK) {
                        return CANNOT_FINISH;
					}
				}
			}
		}
		break;
	}
   return CAN_FINISH;
}
