/* C program to print all event numbers from 
 * 1 to n using for loop
 * */

#include <stdio.h>

int main(void)

{
    int i, end;

    printf("Print all even numbers from 1 to : ");
    scanf("%d", &end);

    for(i=1; i<=end; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }

    }

        return 0;

    }

