// abs is used for calculating absolute value of a number

#include <stdio.h>
#include <math.h>

int main(void)
  
{
  int n, result;
  
  printf("Enter an integer to calculate it's absolute value\n");
  scanf("%d", &n);
  
  result = abs(n);
  
  printf("Absolute value of %d = %d\n", n, result);
  
  return 0;
  
}