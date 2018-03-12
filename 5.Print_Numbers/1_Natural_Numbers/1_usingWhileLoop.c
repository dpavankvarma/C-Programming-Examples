/* C program to print all natural numbers from 1 to n
 * using While Loop
 */

#include <stdio.h>

int main(void)

{
    int i, start, end;

    printf("Enter a start value: ");
    scanf("%d", &start);
    printf("Enter a end value: ");
    scanf("%d", &end);

    printf("Natural numbers from %d to %d : \n", start, end);

    i=1;
    while (i<=end)
    {
        printf("%d\n", i);
        i++;

    }

    return 0;

}
