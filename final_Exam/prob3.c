#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
    int *z;
};

int main(int argc, char const *argv[])
{
    int a = 3;
    struct point example;
    printStruct(&example);
    example.x = 1;
    example.y = 2;
    example.z = &a;
    printStruct(&example);
    printMem(&example);
    return 0;
}

void printStruct(struct point * ex){
    printf("%d  |   %d  |   %d\n", (*ex).x, (*ex).y, *((*ex).z));
}

void printMem(struct point * ex){
     printf("%#010x  |   %#010x  |   %#010x\n", &((*ex).x), &((*ex).y), &(*((*ex).z)));
}