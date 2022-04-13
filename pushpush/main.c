
#include "ch21.h"

extern int         originalMap[SIZE_MAP_ROW][SIZE_MAP_COL];
extern int         originalMap_STAGE_1[SIZE_MAP_ROW][SIZE_MAP_COL];
extern int         originalMap_STAGE_2[SIZE_MAP_ROW][SIZE_MAP_COL];
extern int         originalMap_C[SIZE_MAP_ROW][SIZE_MAP_COL];
int         inputKey;
int         playground[SIZE_MAP_ROW][SIZE_MAP_COL];
char level;
Position      player;
Position      tp; 
Position      tb; 

int main() {

   //커서 숨기기

   CONSOLE_CURSOR_INFO CurInfo;

   CurInfo.dwSize = 1;

   CurInfo.bVisible = FALSE;

   SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);

   system("mode con : cols=50 lines=50");

   printf("Choose Level:(A/B/C)");
   scanf(" %c",&level);

   switch(level) {
   case 'A':
      init_A();
      break;
   case 'B':
      init_B();
      break;
   case 'C':
      init_C();
      break;
   default:
      break;
   }
   showGame();
   display();
 
   while(1) {
      inputKey = getKey();
      if(checkMove() == CAN_MOVE) {
         move();
         showGame();
		 display();
		 
         //printf("p(%d,%d), tp(%d,%d), tb(%d,%d)\n", player.row,player.col,tp.row,tp.col,tb.row,tb.col);
         if(checkFinish() == CAN_FINISH) {
            printf("Finish!!!\n");
            break;;
         }
      }
   }
   return 0;
}
