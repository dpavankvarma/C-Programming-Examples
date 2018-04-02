/* C program to check whether the number is even or odd 
 * using switch case statement
 * */

#include <stdio.h>

int main(void)

{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    switch(num % 2)
    {
        case 0:
            printf("%d is a even number\n", num);
            break;

        case 1:
            printf("%d is a odd number\n", num);
            break;
    }

    return 0;

}

