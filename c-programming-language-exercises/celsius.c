#include <stdio.h>

main()
{
  float fahr, celsius;
  int upper, lower, step;

  upper = 100;
  lower = -20;
  step = 10;

  celsius = lower;
  
  printf("Celsius\tFahrenheit\n");
  
  while(celsius <= upper){
    fahr = (celsius+32) / (5.0/9.0);
    celsius = celsius + step;
    
    printf("%3.0f\t%6.1f\n", celsius, fahr);
  }
}
    
