#include <stdio.h>
#include <string.h>

#define SIZE 30

void sortArray(char *);

int main ()
{
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
   char quit[30];

   fgets(arr,SIZE,stdin);
   sscanf(arr, "%s", quit);
   while (strcmp(quit, "quit") != 0)
   {
      arr[strlen(arr)-1] = '\0';

      sortArray(arr);
      printf("%s\n\n", arr);

      fgets(arr,SIZE,stdin);
      sscanf(arr, "%s", quit);
    }
    return 0;
}

void sortArray(char * str) {
  int n = strlen(str);
  int i =0;
  int j=0;
  int smallest;
  char temp;
  for(i = 0; i < n; i++){
    smallest = i;
    for(j = i+1; j < n; j++){
      if(*(str + j) < *(str + smallest)){
        smallest = j;
      }
    }
    temp = *(str + i);
    *(str + i) = *(str + smallest);
    *(str + smallest) = temp;
  }
}
