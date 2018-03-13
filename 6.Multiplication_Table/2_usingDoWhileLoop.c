/* C program to display multiplication table of a given 
 * number using do-while loop
 */

#include <stdio.h>

int main(void)

{
    int num, i=1;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Multiplicatino table of %d: \n", num);

    do 
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;

    }while(i<=10);

    return 0;

}
