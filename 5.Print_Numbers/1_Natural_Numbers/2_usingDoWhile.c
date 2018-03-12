/* C program to print all natural numbers form 1 to n
 * using Do While loop
 */

#include <stdio.h>

int main(void)

{
    int i, end;

    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &end);

    i=1;
    do 
    {
        printf("%d\n", i);
        i++;

    }while (i<=end);

    return 0;

}
