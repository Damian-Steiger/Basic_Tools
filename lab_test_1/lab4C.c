#include <stdio.h>
#include <string.h>

#define SIZE 10
#define SIZE2 40

int main(int argc, char *argv[])
{

     char input[SIZE2];
     char name[SIZE];
     int age;
     float rate;
     char resu[SIZE2], resu2[SIZE2];

     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);
     while (strcmp(input, "exit\n") != 0)
     {
       //output original input using two functions.
       printf("%s", input);  // no \n needed
       fputs(input, stdout);

       sscanf(input, "%s %d %f", name, &age, &rate);
       age += 10;
       rate *= 2;
       name[0] = toupper(name[0]);
       sprintf(resu, "%s %d %.3f\n", name, age, rate);
       strcpy(resu2, resu);

       printf("%s", resu);  // no \n needed
       fputs(resu2, stdout);


       /* use fgets to read again */
       printf("Enter name, age and rate (or \"exit\"): ");
       fgets(input, 40, stdin);

     }
      return 0;
}
