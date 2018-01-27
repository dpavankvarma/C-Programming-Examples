
#include <stdio.h>

int main(void)

{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    (num > 0) ? printf("%d is a positive number\n", num):
        (num < 0) ? printf("%d is a negative number\n", num) : printf("%d is neither positive or negative\n", num);

    return 0;

}
