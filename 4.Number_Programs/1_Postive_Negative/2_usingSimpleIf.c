/* C program to check positive negative or zero using 
 * simple if statement
 */

#include <stdio.h>

int main(void)

{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("Number is POSITIVE \n");
    }
    if (num < 0)
    {
        printf("Number is NEGATIVE \n");
    }
    if (num == 0)
    {
        printf("Number is ZERO \n");
    }

    return 0;
}
