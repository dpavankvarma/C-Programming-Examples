
#include <stdio.h>

int main(void)

{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is a even number\n", num) : printf("%d is a odd number\n", num);

    return 0;

}
