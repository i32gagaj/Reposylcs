#include <stdio.h>
#include <string.h>

void f()
{
	char c1[100]= "Hello world";
	char c2[100]= ", I am Pepe";
	printf("%s\n", strcat(c1, c2));
	return 0;
}
