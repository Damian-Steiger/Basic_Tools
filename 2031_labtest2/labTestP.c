#include <string.h>
#include <stdio.h>

void printAll(char [] [50], int);
void swap(char [] [50], int);
void reverse(char [] [50], int *);
void test();

int main(int argc, char const *argv[])
{
    char input [30][50];
    int current_row = 0;

    printf("SIZE: %d\n\n", sizeof(input));
    printf("Enter String: ");

    fgets(input[current_row], 50, stdin);

    while(strcmp("xxx\n", input[current_row]) != 0){
        current_row ++;
        printf("Enter String: ");
        fgets(input[current_row], 50, stdin);
    }

    printAll(input, current_row);

    swap(input, current_row);
    printAll(input, current_row);

    reverse(input, current_row);
    printAll(input, current_row);

    return 0;
}

void test(){
    printf("\ntest\n");
}

void printAll(char  p [] [50], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\n[%d] %s", i, *(p + i));
    }
}

void swap(char p [] [50], int n){
    int j;
    char temp [50];
    for(j=0;j < n;j ++){
        strcpy(temp, *(p + j));
        strcpy(*(p + j), *(p + j +1));
        strcpy(*(p + j +1), temp);
    }
    printf("\nSWAP : \n");
}

void reverse(char p [][50], int *p2){
    int j;
    int end = *p2;
    char temp [50];
    for(j=0;j<(*p2)/2;j++){
        strcpy(temp, p[j]);
        strcpy(p[j], p[end]);
        strcpy(*p[end], temp);
        end --;
    }
    printf("\nREVERSE : \n");
}
