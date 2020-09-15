/* This program prints the sine function of any input 
between (0, 1).*/

#include <stdio.h>
#include <math.h>

int main()
{
  double sineX, x;
  
  printf(" Please enter the value of 'x': ");
  scanf("%lf", &x);
  
  sineX = sin(x);
  
  printf("The value for the Sine of %lf is: %lf\n", x, sineX);
  
  return 0;

}
  
