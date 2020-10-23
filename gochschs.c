/* Fig. 2.5: fig02_05.c
Additio prodram */
#include <stdio.h>

/* function main begins program execution */
int main(void)
{
	int integer1; /* firts number to be input by user */
	int integer2; /* second number to be input by user */
	int s, n, t, c; /* variable in which sum will be stored */
	
	printf( "Enter firts integer\n" ); /*prompt */
	scanf("%d", &integer1 ); /* read an integer */
	
	printf("Enter second integer\n"); /* prompt */
	scanf("%d", &integer2 ); /* read an integer */
	
	s = integer1 + integer2; /* assign total to s */
	printf(" %d + %d = %d\n", integer1, integer2, s ); /* print s */
	t = integer1 - integer2; /* assign total to t */
	printf(" %d - %d = %d\n ", integer1, integer2, t); /* print t */
	c = integer1 * integer2; /* assign total to c */
	printf(" %d * %d = %d\n", integer1, integer2, c); /* print c */
	n = integer1 / integer2; /* assign total to n */
	printf(" %d / %d = %d\n", integer1, integer2, n); /* print n */
	
	return 0; /* indicate that program ended successfully */
} /* end function main */
