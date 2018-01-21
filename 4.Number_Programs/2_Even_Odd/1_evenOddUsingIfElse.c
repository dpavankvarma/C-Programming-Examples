/* Program to check whether the number if even or odd
 * If a number is exactly divisible by 2 then its an even number
 * else it is an odd number */

#include <stdio.h>

int main(void)

{
    int num;
    
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is a even number\n", num);
    else
        printf("%d is a odd number\n", num);

    return 0;

}
