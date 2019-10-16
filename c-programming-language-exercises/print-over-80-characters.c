#include <stdio.h>
#define LINELIMIT 5
#define MAXLINE 1000

int main()
{
  int len, c;
  char line[MAXLINE];

  while ((c = getchar()) != EOF) {
    int i;
    
    for (i = 0; i<MAXLINE && (c=getchar()!=EOF) && c!='\n'; ++i) {
      line[i] = c;
      if (len > LINELIMIT) {
	line[i + 1] = '\0';
	printf("%s\n", line);
	break;
      }
    }
  }
}
