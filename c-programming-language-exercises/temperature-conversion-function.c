#include <stdio.h>

#define LOWER -50
#define UPPER 150
#define STEP 20

float cels_to_fahr(float cels);

int main()
{
  for (int i = LOWER; i < UPPER; i = i + STEP)
    printf("%3d %6.1f\n", i, cels_to_fahr(i));

  return 0;
}


float cels_to_fahr(float cels)
{
  return ((9 * cels) / 5) + 32;
}


