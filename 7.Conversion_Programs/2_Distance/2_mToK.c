/* C program to convert miles to 
 * kilometers
 * */

#include <stdio.h>

int main(void)

{
    double miles, kms;

    printf("Enter the distance in miles : ");
    scanf("%lf", &miles);

    kms = 1.609 * miles;

    printf("Distance in kilometers is: %lf\n", kms);

    return 0;

}
