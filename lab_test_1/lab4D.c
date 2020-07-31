#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
    char input_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char rateS[10];
    int count;

    printf("Enter name age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS);

    while (strcmp(name, "xxx") != 0)
    {

      //array push 1
      sprintf(input_table[count], "%s %s %s", name, ageS, rateS);

      //change
      int i;
      for (i = 0; i < strlen(name); i++){
        name[i] = toupper(name[i]);
      }
      int ageTemp = atoi(ageS) + 10;
      double  rateTemp = atof(rateS) * 1.5;

      sprintf(input_table[count+1], "%s %d %.3f", name, ageTemp, rateTemp);

      count += 2;

       /* read again using scanf(%s %s %s) */
       printf("Enter name age and rate: ");
       scanf("%s %s  %s", name, ageS, rateS);

    }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);

    /* now display the input_table row by row */
    int i;
    for(i = 0; i < count; i ++){
      printf("row[%d] : %s \n", i, input_table[i]);
    }

     return 0;
}
