/***************************************
* EECS2031B – Lab 6
* Author: Steiger, Damian
* Email: damian06@my.yorku.ca
* eecs_num: damian06
* Yorku #: 216433476
****************************************/

#include <stdio.h>
#include <string.h>

void exchange2D(char [][50]);
void print2d(char [][50], int);

int main(int argc, char const *argv[])
{
    char inputs[30][50];
    int current_row = 0;

    printf("\nsizeof inputs: %ld\n", sizeof(inputs));

    printf("\nEnter String: ");
    fgets(inputs[current_row], 50, stdin);

    while(strcmp(inputs[current_row], "xxx\n") != 0){
        current_row++;
        printf("Enter String: ");
        fgets(inputs[current_row], 50, stdin);  
    }

    printf("\n == Before Swap == \n");
    print2D(inputs,current_row);
    char temp1[50];
    strcpy(temp1, inputs[0]);
    strcpy(inputs[0], inputs[1]);
    strcpy(inputs[1], temp1);
    exchange2D(inputs);
    printf("\n == After Swap == \n");
    print2D(inputs,current_row);
    return 0;
}

void exchange2D(char inputs [][50]){
    char temp2[50];
    int i;
    for (i = 2; i < 6; i += 2){
        strcpy(temp2, inputs[i]);
        strcpy(inputs[i], inputs[i+1]);
        strcpy(inputs[i+1], temp2);
     }
}

void print2D(char inputs [][50], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("[%d] - %s",i,inputs[i]);
    }
}
