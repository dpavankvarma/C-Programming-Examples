/* C progarm to print all odd numbers
 * from 1 to n using do-while loop
 * */

#include <stdio.h>

int main(void)

{
    int i, end;

    printf("Print all odd numbers from 1 to : ");
    scanf("%d", &end);

    i=1;
    do 
    {
        if(i%2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }while(i<=end);

    return 0;

}
