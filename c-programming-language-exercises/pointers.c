#include <stdio.h>

int main(){
  int num = 10;
  int *p = &num;

  printf("adress \t Name \t Value\n");
  printf("%p \t %s \t %d\n", p, "Num", *p);
  
  return 0;
}
