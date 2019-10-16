#include <stdio.h>

main()
{
  int c;
  int inspace = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (inspace == 1)
	continue;
      else
	inspace = 1;
    }
    
    else {
      inspace = 0;
    }
   
    putchar(c);
  }
}
