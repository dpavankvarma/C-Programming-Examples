// Cos function returns consine of an angle (in radian)

#include <stdio.h>
#include <math.h>

int main(void)

{
  double result, x = 1.0471;
  
  result = cos(x);
  
  printf("cos(%.4lf) = %.2lf\n", x, result);
  
  return 0;
}