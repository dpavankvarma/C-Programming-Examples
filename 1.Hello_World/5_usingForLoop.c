
// C program to print "Hello World" using For Loop 

#include <stdio.h>

int main(void)

{
	int c, n;
	
	printf("How many times you want to display hello world on computer screen?\n");
	scanf("%d", &n);
	
	for (c=1; c<=n; c++)
		printf("Hello World!!!\n");
	
	return 0;
	
}