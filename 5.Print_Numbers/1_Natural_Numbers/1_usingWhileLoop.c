/* C program to print all natural numbers from 1 to n
 * using While Loop
 */

#include <stdio.h>

int main(void)

{
    int i, end;

    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &end);

    i=1;
    while (i<=end)
    {
        printf("%d\n", i);
        i++;

    }

    return 0;

}
