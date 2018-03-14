/* C program to convert temperature form
 * celsius to fahrenheit
 */

#include <stdio.h>

int main(void)

{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%2.f Celsius = %2.f Fahrenheit\n", celsius, fahrenheit);

    return 0;

}



