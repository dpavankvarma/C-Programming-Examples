/* C program to calculate 
 * area of a circle
 */

#include <stdio.h>

int main(void)

{
    float radius, area, pi = 3.14;

    printf("Enter the radius of a circle : ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("Are of circle is : %f\n", area);

    return 0;

}
