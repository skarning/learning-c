#include <stdio.h>

main()
{
  long tabs = 0, blanks = 0, new_lines = 0;
  
  int c;
  while((c = getchar()) != EOF) {
    if (c == '\t')
      ++tabs;
    if (c == ' ')
      ++blanks;
    if (c == '\n')
      ++new_lines;
  }

  printf("Tabs: %ld\nBlanks: %ld\nNew-lines: %ld\n", tabs, blanks, new_lines);
}
