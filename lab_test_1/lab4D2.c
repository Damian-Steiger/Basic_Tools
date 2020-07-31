#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[ROWS][COLUMNS];
     int count;
     char name[10];
     int age;
     float rate;

     printf("Enter name age and rate: ");
     fgets(input_table[count], 30, stdin);   // add a /n

     while(1)
     {
	 /* need to 'tokenize' the current input */
      sscanf(input_table[count], "%s %d %f", name, &age, &rate);

      if(strcmp(name, "xxx") == 0) break;

      int i;
      for (i = 0; i < strlen(name); i++){
        name[i] = toupper(name[i]);
      }
      name[i] = '\0';
      age += 10;
      rate *= 1.5;

      sprintf(input_table[count+1], "%s %d %.2f\n", name, age, rate);

      count += 2;

      printf("Enter name age and rate: ");
      fgets(input_table[count], 30, stdin);

     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
     int i;
     for(i = 0; i < count; i ++){
       printf("row[%d] : %s \n", i, input_table[i]);
     }

     return 0;
}
