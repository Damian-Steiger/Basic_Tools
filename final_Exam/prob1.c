
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arrSize;
    int i;
    
    printf("What is the size of the Array?\n");
    scanf("%d", &arrSize);

    char ** p = (char *) malloc(arrSize * sizeof(char *));
    if(p == NULL){
        exit(0);
    }

    for (i = 0; i < arrSize; i++){
        printf("\nNext = ");
        scanf("%s", &(*(p + i)));
    }

    for (i = 0; i < arrSize; i++){
        printf("\n%s\n", (p + i));
    }

    return 0;
}
