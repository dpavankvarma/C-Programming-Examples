/* C program to display multiplication table of a given number
 * using while loop
 * */

#include <stdio.h>

int main(void)

{
    int num, i = 1;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Multiplication table of %d: \n", num);

    while (i<=num)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;

    }

    return 0;

}
