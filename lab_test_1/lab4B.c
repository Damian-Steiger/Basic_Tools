#include <stdio.h>
#include <string.h>

#define SIZE 12

main (){
   char str[SIZE];
   int i;
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
    printf("\n");

   strcpy(str, "Hi");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));

   strcpy(str, "There");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));

   strcpy(str, "XY");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));

   strcat(str, "OK");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));

   strcat(str, "++");
   for(i=0; i<SIZE; i++)
      printf("[%d] %c %d\n",i,str[i], str[i]);
   printf("%s\nsize:%d  length:%d\n\n", str, sizeof str,strlen(str));
   return 0;
}
