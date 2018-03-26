/* C program to convert kilometers 
 * to miles 
 * */ 

#include <stdio.h>

int main(void)

{
    double miles, kms;

    printf("Enter the distance in kilometers : ");
    scanf("%lf", &kms);

    miles = 0.621371 * kms;

    printf("Distance in miles : %lf\n", miles);

    return 0;

}
