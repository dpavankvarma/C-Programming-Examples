#include <stdio.h>

int main(void)
	
{
	char s1[] = "Hello World!!!";
	char s2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '!', '!', '\0'};
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	
	return 0;
	
}