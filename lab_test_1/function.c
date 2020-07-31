#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n\n", x,y,z)

// define global variables and a function
void r_agv(void);

int count;
int sum;

void r_avg(void)
{
    double resu = (double)sum / (double)count ;
    MY_PRINT(sum , count, resu);
}
