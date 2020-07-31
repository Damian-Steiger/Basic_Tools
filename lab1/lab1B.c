#include <stdio.h>

main()
{
  int m, d, y;
  printf("Enter month, day and year separated by spaces: " );

  scanf( "%d %d %d",  &m, &d, &y);     /* assign value to d, m, and y  */

  printf("the input \'%d %d %d\' is reformatted as %d/%d/%d and %d-%d-%d\n", m, d, y, y, m, d, y, m, d);
}
