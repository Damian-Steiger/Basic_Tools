/***************************************
* EECS2031B – Lab 6
* Author: Steiger, Damian
* Email: damian06@my.yorku.ca
* eecs_num: damian06
* Yorku #: 216433476
****************************************/

#include <stdio.h>
#include <string.h>
#define SIZE 9

void exchangeParr(char *[]);
void printParr(char *[], int );
void printParr2(char **, int );

main(){

 char * inputs[SIZE] = {"this is input 0, giraffes", "this is input 1, zebras",  "this is input 2, monkeys",
                      "this is input 3, kangaroos"};

  char arr1 [] = "this is input 4, do you like them?";
  char arr2 [] = "this is input 5, yes";
  char arr3 [] = "this is input 6, thank you";
  char arr4 [] = "this is input 7, you're welcome";
  char arr5 [] = "this is input 8, bye";

  inputs[4] = arr1;
  inputs[5] = arr2;
  inputs[6] = arr3;
  inputs[7] = arr4;
  inputs[8] = arr5;

  printf("sizeof char*: %d, sizeof pointer array: %d\n\n", sizeof(char*), sizeof inputs );

  // display the array by calling printParr
  printParr(inputs, SIZE);

  // swap pointee of first and second element pointers
  char * tmp = inputs[0];
  inputs[0] = inputs[1];
  inputs[1] = tmp;

  // call exchangeParr() to swap some other 'rows';
  exchangeParr(inputs);
  
  printf("\n== after swapping ==\n");   printf("===========================\n");

  // display the swapped array by calling printParr()
  printParr(inputs, SIZE);

  // display the swapped array again by calling printParr2()
  printParr2(inputs, SIZE);
}

void printParr(char * records[], int n){
    printf("\n");
    int i;
    for (i = 0; i < n; i++){
        printf("%d - %s\n", i, records[i]);
    }
}

 void printParr2(char ** records, int n){
    printf("\n");
    int i;
    for (i = 0; i < n; i++){
        printf("%d - %s\n", i, *(records + i));
    }
 }

 void exchangeParr(char * records[]){
     char * tmp = records[2];
     records[2] = records[3];
     records[3] = tmp;
     tmp = records[4];
     records[4] = records[5];
     records[5] = tmp;
 }
