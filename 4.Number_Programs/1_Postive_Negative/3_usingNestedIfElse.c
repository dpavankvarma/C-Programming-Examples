#include <stdio.h>

int main(void)

{
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num > 0)
            printf("%d is a Positive Number\n", num);
        else
            printf("You have entered value zero.\n");
    }
    else 
        printf("%d is a Negative number\n", num);

    return 0;

}
