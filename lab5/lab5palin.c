#include <stdio.h>
#include <string.h>

#define SIZE 40

void printReverse (char *);
int isPalindrome (char *);

int main ()
{
   int result;  char c; int i;  int count=0;
   char quit[30];
   char arr[SIZE];

   fgets(arr,SIZE,stdin);
   sscanf(arr, "%s", quit);
   while (strcmp(quit, "quit") != 0)
   {
      arr[strlen(arr)-1] = '\0'; // remove the trailing \n
      // print backward
      printReverse(arr);

      if (isPalindrome (arr))
         printf ("\nIs a palindrome.\n\n");
      else
         printf ("\nNot a palindrome.\n\n");

      fgets(arr,SIZE,stdin);
      sscanf(arr, "%s", quit);
    }
    return 0;
}


int isPalindrome (char * str)
{
  const char *t;
  for (t = str; *t != '\0'; t++); t--;
  while (str < t)
  {
    if ( *str++ != *t-- ) return 0;
  }
  return 1;
}

// assume the \n was already removed manually
void printReverse(char * str)
{
  int i;
  for(i = sizeof(str); i >= 0; i--)
    printf("%c", *(str + i));
}
