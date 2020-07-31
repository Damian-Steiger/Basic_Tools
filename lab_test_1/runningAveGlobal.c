#include <stdio.h>
#include "function.c"

int main(int argc, char *argv[])
{
    int input;

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);

    while(input != -1){
      count ++;
      sum += input;

      r_avg();

      printf("Enter number (-1 to quit): ");
      scanf("%d", &input);

     }

     return 0;
}
