/* C program to print all even numbers 
 * from 1 to n using while loop
 */

#include <stdio.h>

int main(void)

{
    int i, end;

    printf("Print all even numbers from 1 to : ");
    scanf("%d", &end);

    i=1;
    while (i<=end)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
        
        i++;

    }

    return 0;
}

