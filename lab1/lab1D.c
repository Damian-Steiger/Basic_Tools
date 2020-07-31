#include <stdio.h>

float sum(float, float); // declares sum before definition

int main()
{
   float x, y;

   printf("Enter two float numbers separated by ##: ");

   scanf("%f##%f", &x, &y);

   printf( "%f + %f = %f\n", x,y, sum(x,y));

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;
}
