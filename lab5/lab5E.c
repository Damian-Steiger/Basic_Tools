/* Passing an array to a function. */

#include <stdio.h>
#include <string.h>

#define MAX 20


int largest(int * x);
void display(int *arr);

 main(int argc, char *argv[])
 {
     int array[MAX], count;

     /* Input MAX values from the keyboard. */
     int i;  count=0;

     while ( scanf("%d", &i) != EOF){
        *(array + count) = i; // store in array[count]
        count++;
     }


      /* Call the function and display the return value. */
      printf("Inputs: ");
      display(array);



     printf("\nLargest value: %d\n", largest(array));

     return 0;
 }

 /* display a int array */

 void display(int *arr)
 {
   int len = sizeof(arr) * 2;
   int i=0;
  while(i < len){
    printf("%d ",*(arr+i));
    i++;
  }
   printf("\n");
 }


/* Function largest() returns the largest value */
 /* in an integer array */

 int largest(int * arr)
 {
   int len = sizeof(arr) * 2;
   int i=0;
   int largest = *arr;
   while(i < len){
     if(largest < *(arr + i)) largest = *(arr + i);
     i++;
   }
     return largest;
 }
