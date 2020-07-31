#include <stdio.h>

float sum(float, float); // declares sum before definition

int main()
{
   float x, y;

   int i; //holds number of repeats

   printf("Enter the number of interactions: ");

   scanf("%d", &i);

   for(int k = 0; k < i ; k++){

     printf("\nEnter two float numbers separated by ##: ");

     scanf("%f##%f", &x, &y);

     printf( "%f + %f = %f \n", x,y, sum(x,y));
   }
   return 0;
}

/* function definition */
float sum (float i, float j){
   return i+j;
}
