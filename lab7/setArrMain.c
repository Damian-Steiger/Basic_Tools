/***************************************
* EECS2031B – Lab 7
* Author: Steiger, Damian
* Email: damian06@my.yorku.ca
* eecs_num: damian06
* York #: 216433476
****************************************/

#include <stdio.h>

void setArr (int, int);

int * arr[10]; // array of 10 int pointers, global variable

int main(int argc, char *argv[])
{
     int i;

     int a=-10, b=100, c=200,d=300,e=400;
     int *pA = &a;

     arr[0] = pA;
     arr[1] = &b;
     arr[2] = &c;
     arr[3] = &d;
     arr[4] = &e;

     for(i=0; i<5;i++)
         printf("arr[%d] -*-> %d %d\n", i, *arr[i], **(arr+i));  /* should be -10, 100, 200, 300, 400 */

     return 0;
}
