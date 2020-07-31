/***************************************
* EECS2031B – Lab 7
* Author: Steiger, Damian
* Email: damian06@my.yorku.ca
* eecs_num: damian06
* York #: 216433476
****************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void printArr(int *, int);

int  main()
{
  char *p;
  int n, i;
  printf("# of elements in int array: ");
  scanf("%d", &n);

  int * ptr = (int *)malloc(n * sizeof(int));


  if (ptr == NULL) {
        printf("Memory not allocated. Bye!\n");
        exit(0);
    }

  *ptr = -10;
  for(i =1; i<n; i++)
    *(ptr+i) = i*100;

  printArr(ptr, n);

  p = malloc(6 * sizeof(char));
  strcpy(p, "\nhello");
  printf("%s %d\n", p, strlen(p));
  *(p+2) = 'X';
  printf("%s\n", p);

  return 0;
}

// print the first n elements of int array arr
void printArr(int * arr, int n){
  int loop;

   for(loop = 0; loop < n; loop++)
      printf("[%d] %d\n", loop, arr[loop]);
}
