#include <stdio.h>


int sum (int i, int j)
{
  return i+j;
}


main()
{
  int a, b;
  printf("Please enter two integers separated by blank: " );

  scanf( "%d<><><>%d",  &a, &b);     /* assign value to a b  */

  printf("Entered %d and %d. Sum is %d\n", a, b, sum(a,b));
}
