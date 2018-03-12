/* C program to print all natural numbers from 1 to n
 * using For Loop
 */

#include <stdio.h>

int main(void)

{
    int i, end;

    printf("Print all natural numbers from 1 to n: ");
    scanf("%d", &end);
 
    for (i=1; i<=end; i++)
    {
        printf("%d\n", i);

    }

    return 0;

}
