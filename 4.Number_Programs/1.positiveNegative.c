/* Program to check whether a number is positive or negative
 * If the input number is greater than zero then its positive
 * Else it is negative
 * If the number is zero that it is neither positive nor negative
 */

#include <stdio.h>

int main(void)

{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is a positive number \n", num);

    else if (num < 0)
        printf("%d is a neagative number \n", num);

    else
        printf("0 is neither positive or negative \n");

    return 0;

}
