//includes
#include <stdlib.h>
#include <stdio.h>

//functions
struct node * add2Front(struct node *, int, int, int);
void add2Back(struct node *, int, int, int);
void printList(struct node *);
int getLen(struct node *);
void insertIndex(struct node *, int, int, int, int);
void deleteIndex(struct node *, int);
int search(struct node *, int, int, int);

//Structs
struct node
{
    int data [3];
    struct node *next;
};

int main(int argc, char const *argv[])
{
    struct node * head;
    head = add2Front(head, 1, 1, 1);
    head = add2Front(head, 2, 2, 2);
    head = add2Front(head, 3, 3, 3);
    add2Back(head, 6 ,6 ,6);
    add2Back(head, 5 ,5 ,5);
    add2Back(head, 4 ,4 ,4);

    insertIndex(head, 3, 7, 7, 7);
    deleteIndex(head, 3);
    printList(head);
    printf("Length = %d\n", getLen(head));
    printf("Contains [1,2,3]?\t %d\n", search(head, 1, 2, 3));
    printf("Contains [5,5,5]?\t %d\n", search(head, 5, 5, 5));

    return 0;
}

struct node * add2Front(struct node * currHead, int x, int y, int z){
    struct node * newNode = malloc( sizeof(struct node) );
    (*newNode).data[0] = x;
    (*newNode).data[1] = y;
    (*newNode).data[2] = z;
    (*newNode).next = currHead;
    currHead = newNode;
    return currHead;
}

void add2Back(struct node * currHead, int x, int y, int z){
    struct node * newNode = malloc( sizeof(struct node) );
    (*newNode).data[0] = x;
    (*newNode).data[1] = y;
    (*newNode).data[2] = z;

    while((*currHead).next != NULL){
        currHead = (*currHead).next;
    }

    (*currHead).next = newNode;
}

void printList(struct node * currHead){
    while((*currHead).next != NULL){
        printf("x=%d    y=%d    z=%d\n", (*currHead).data[0], (*currHead).data[1], (*currHead).data[2]);
        currHead = (*currHead).next;
    }
    printf("x=%d    y=%d    z=%d\n", (*currHead).data[0], (*currHead).data[1], (*currHead).data[2]);
}

int getLen(struct node * currHead){
    if(currHead == NULL){
        return 0;
    }
    int count = 0;
    while((*currHead).next != NULL){
        count ++;
        currHead = (*currHead).next;
    }
    count ++;

    return count;
}

//doesnt support 1st index
void insertIndex(struct node * currHead, int index, int x, int y, int z){
    int count = 0;
    while(count < index - 2){
        count ++;
        currHead = (*currHead).next;
    }

    struct node * newNode = malloc(sizeof(struct node *));
    (*newNode).data[0] = x;
    (*newNode).data[1] = y;
    (*newNode).data[2] = z;

    (*newNode).next = (*currHead).next;
    (*currHead).next = newNode;
}

//doesnt support 1st index
void deleteIndex(struct node * currHead, int index){
    int count = 0;
    while(count < index - 2){
        count ++;
        currHead = (*currHead).next;
    }
    struct node * temp = malloc(sizeof(struct node *));
    temp = (*currHead).next;
    (*currHead).next = (*temp).next;
    free(temp);
}

int search(struct node * currHead, int x, int y, int z){
    if(currHead == NULL){
        return 0;
    }
    int count = 0;

    while((*currHead).data[0] != x | (*currHead).data[1] != y |(*currHead).data[2] != z){
        count ++;
        if((*currHead).next == NULL) return 0;
        currHead = (*currHead).next;
    }

    return 1;
}
