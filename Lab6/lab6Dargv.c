/***************************************
* EECS2031B – Lab 6
* Author: Steiger, Damian
* Email: damian06@my.yorku.ca
* eecs_num: damian06
* Yorku #: 216433476
****************************************/

#include <stdio.h>
#include <string.h>

int getSum(char *[], int);
int getDiff(char **, int );

int main(int argc, char const *argv[])
{
    printf("There are %d arguments (excluding \"a.out\")", (argc - 1));

    if(strcmp("sum", argv[1]) == 0){
        printf("\n");
        for(int i=2 ; i<argc ; ++i){
            if(i==argc-1) printf("%s", *(argv+i));
            else printf("%s + ", *(argv+i));
        }
        printf("\n= %d\n", (getSum(argv, argc)));

    }else if (strcmp("diff", argv[1]) == 0){
        printf("\n");
        for(int i=2 ; i<argc ; ++i){
            if(i==argc-1) printf("%s", *(argv+i));
            else printf("%s - ", *(argv+i));
        }
        printf("\n= %d\n", (getDiff(argv, argc)));
    
    }
    return 0;
}


int getSum(char *arr[] , int n){
    int sum = 0;
    for(int i=1 ; i<n ; ++i){
        sum += atoi(*(arr+i));
    }
    return sum;
}

int getDiff(char **arr, int n){
    int diff = 0;
    for(int i=1 ; i<n ; ++i){
        diff -= atoi(*(arr+i));
    }
    return diff;
}