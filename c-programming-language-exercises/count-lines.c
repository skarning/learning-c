#include <stdio.h>

main()
{
  long nl;
  int c;

  while ((c = getchar()) != EOF){
    if (c == '\n')
      ++nl;
  }
  printf("%ld\n", nl);
}
