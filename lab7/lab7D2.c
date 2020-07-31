/***************************************
* EECS2031B – Lab 7
* Author: Steiger, Damian
* Email: damian06@my.yorku.ca
* eecs_num: damian06
* York #: 216433476
****************************************/

#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);

struct node {
   int data;
   struct node * next;
};

struct node * head;

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);
   insertBegining(500);

   int i;
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");
}

void insertBegining(int dat){
   struct node * newNode;
   newNode = malloc(sizeof(struct node));

   (*newNode).data = dat;

   (*newNode).next = head;

   head = newNode;

}

//infinite repeated print of 500
