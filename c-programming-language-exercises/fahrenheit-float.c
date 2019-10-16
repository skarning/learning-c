#include <stdio.h>

/*Print Fahrenheit-Celcius table
  for fhar = 0, 20, ..., 300; floating-point version*/

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;       /*lower limit of temperature table*/
  upper = 300;     /*upper limit*/
  step = 20;       /*step size*/

  fahr = lower;
  printf("Fahrenheit\tCelsius\n");
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
