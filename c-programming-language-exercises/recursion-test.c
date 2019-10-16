#include <stdio.h>

#define FAC 3     /* faculty of this number will be calculated */

int rec_faculty(int numb);

int main()
{
  printf("The faculty of %d is %d\n", FAC, rec_faculty(FAC));
}

/* recursive function that returns the faculty of the parameter */
int rec_faculty(int numb)
{
  if (numb == 1)
    return 1;
  return rec_faculty(numb - 1) * numb;
}

