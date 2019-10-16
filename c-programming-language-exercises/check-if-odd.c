#include <stdio.h>

int main()
{
  int number = 6;
  if (number & 1)
    printf("%d is a odd number\n", number);
  else
    printf("%d is an even number\n", number);
}
