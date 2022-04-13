#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#define BLOCK_SIZE   6

void main() {

   int i, j, size, block_num;
   int key[64] = { 3,5,1,6,4,2 };
   char p_text[64], c_text[64], d_text[64];

   printf("*평문 입력:");
   scanf("%s", p_text);

   size = strlen(p_text);

   if (size % BLOCK_SIZE > 0) {
      block_num = strlen(p_text) / BLOCK_SIZE + 1;

      for (i = strlen(p_text); i < block_num * BLOCK_SIZE; i++) {
         p_text[i] = 'x';
      }
   }

   else {
      block_num = strlen(p_text) / BLOCK_SIZE;
   }

   for (i = 0; i < block_num; i++) {
      for (j = 0; j < BLOCK_SIZE; j++) {
         c_text[i * BLOCK_SIZE + j] = p_text[(key[j] - 1) + i * BLOCK_SIZE];
      }
   }

   printf("* 암호문:");
   for (i = 0; i < block_num * BLOCK_SIZE; i++)
      printf("%c", c_text[i]);
   printf("\n");

   for (i = 0; i < block_num; i++) {
      for (j = 0; j < BLOCK_SIZE; j++)
         d_text[(key[j] - 1) + i * BLOCK_SIZE] = c_text[i * BLOCK_SIZE + j];
   }

   printf("* 복호문:");
   for (i = 0; i < size; i++)
      printf("%c", d_text[i]);
   printf("\n");
}