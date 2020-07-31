# include <stdio.h>
# include <string.h>

void exchange2D(char [] [50]);
void print2D(char [] [50], int);

int main(int argc, char const *argv[]) {
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

    exchange2D(input);
    print2D(input, current_row);

    return 0;
}

void exchange2D(char input [][50]){
    char temp1 [50];
    char temp2 [50];

    strcpy(temp1, input[3]);
    strcpy(temp2, input[5]);

    strcpy(input[3], input[4]);
    strcpy(input[5], input[6]);
    strcpy(input[4], temp1);
    strcpy(input[6], temp2);
}

void print2D(char input [] [50], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\n[%d] %s", i, input[i]);
    }
}
