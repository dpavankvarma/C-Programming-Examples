/* C program to convert temperature from 
 * fahrenheit to celsius
 */

#include <stdio.h>

int main(void)

{
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    //fahrenheit to celsius conversion formula
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%2.f Fahrenheit = %2.f Celsius\n", fahrenheit, celsius);

    return 0;

}
