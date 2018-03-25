/* C program to calculate
 * area of a Square
 * */

#include <stdio.h>

int main(void)

{
    float side, area;

    printf("Enter the length of side : ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of Square = %f\n", area);

    return 0;

}
