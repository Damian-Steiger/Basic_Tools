#include <stdio.h>

#define MY_PRINT(x,y,z)  printf("running average is %d / %d = %.3f\n\n", x,y,z)

void r_avg(int);

int main(int argc, char *argv[])
{

   int input;
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        r_avg(input);

        printf("\Enter number (-1 to quit): ");
        scanf("%d", &input);
    }

    return 0;
}

void r_avg(int input)
{
    int sum;
    int count;
    count++;
    sum += input;
    double resu = (double)sum / (double)count;
    MY_PRINT(sum, count , resu);
}
