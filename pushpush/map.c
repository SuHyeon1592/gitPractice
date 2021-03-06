#include "ch21.h"

int originalMap[SIZE_MAP_ROW][SIZE_MAP_COL] = {
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
};

int originalMap_STAGE_1[SIZE_MAP_ROW][SIZE_MAP_COL] = {
   
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,2,4,2,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,2,1,2,2,2,2,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,2,2,3,1,3,4,2,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,4,1,3,5,2,2,2,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,2,2,2,3,2,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,2,4,2,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,2,2,2,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
  
};

int originalMap_STAGE_2[SIZE_MAP_ROW][SIZE_MAP_COL] = {
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,5,1,1,2,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,1,3,3,2,1,2,2,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,1,3,1,2,1,2,4,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,2,2,2,1,2,2,2,4,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,2,1,1,1,1,4,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,1,1,1,2,1,1,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,1,1,1,2,2,2,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
};

int originalMap_STAGE_3[SIZE_MAP_ROW][SIZE_MAP_COL] = {
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,2,2,2,2,2,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,2,5,1,2,2,2,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,2,1,3,1,1,2,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,2,2,1,2,1,2,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,4,2,1,2,1,1,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,4,3,1,1,2,1,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,4,1,1,1,3,1,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6},
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
};

int displayMap[Display_MAP_ROW][Display_MAP_COL] = {
   {6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6},
   {6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6},
   {6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6},
   {6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6},
   {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
};