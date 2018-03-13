/* C program to display multiplication table of a given number using for loop
 */

#include <stdio.h>

int main(void)

{
    int num, i;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Multiplication table of %d: \n", num);

    for (i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        
    }

    return 0;

}
