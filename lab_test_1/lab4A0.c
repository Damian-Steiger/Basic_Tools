#include <stdio.h>

#define SIZE 10

extern int x,y; // declare glo al variables, which are defined somewhere else
void func1();  // declare function, which are defined somewhere else


void aFun(void); // declare function, which is defined later in this file

int main(int argc, char *argv[])
{
    printf("x:%d  y:%d\n", x,y);

    y=10;
    func1();
    printf("x:%d  y:%d\n", x,y);

    int a;

    if (y != 0){
      a = y;
    }
    printf("a: %d\n", a);


    int k;
    for(k=0; k<SIZE; k++)
       aFun();


    return 0;
}

void aFun(void){
    int counter;
    int b;
    printf("aFun() called, counter is %d, b is %d\n", counter, b);

    counter +=10;

 }
