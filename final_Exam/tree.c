#include <stdlib.h>
#include <stdio.h>

void addLeaf(struct leaf *, int, int);
void printAll(struct leaf *);

struct leaf
{
    struct leaf *left;
    struct leaf *right;
    int data;
};

int main(int argc, char const *argv[])
{
    struct leaf * parent;
    (*parent).data = 0;
    addLeaf(parent, 1, 1);
    addLeaf(parent, 2, 0);
    printAll(parent);
    return 0;
}

void addLeaf(struct leaf * parent, int data, int dir){
    struct leaf * newLeaf = malloc(sizeof(struct leaf *));
    (*newLeaf).data = data;

    if(dir == 1){
        (*parent).left = newLeaf;
    }else{
        (*parent).right = newLeaf;
    }
}

void printAll(struct leaf * parent){
    printf("%d", (*parent).data);
    while((*parent).left != NULL){
        printAll((*parent).left);
    }
    while((*parent).right != NULL){
        printAll((*parent).right);
    }
}
