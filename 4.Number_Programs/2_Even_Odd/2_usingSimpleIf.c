/* C program to check if a number is positive or negative
 * using simple if statement
 */
#include <stdio.h>

int main(void)

{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is a even number\n", num);
    }

    if (num % 2 != 0)
    {
        printf("%d is a odd number\n", num);
    }

    return 0;

}
