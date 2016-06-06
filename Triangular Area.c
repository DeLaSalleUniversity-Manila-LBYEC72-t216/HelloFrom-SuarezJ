#include <stdlib.h>
#include <stdio.h>
int main ()
{
int b,h,a;
	printf(" Enter triangle's base: ");
	scanf("%d", &b);
	printf(" Enter triangle's height: ");
	scanf("%d", &h);
	a=(b*h)/2;
	printf("\n Triangular area: %d\n\n", a);
	system("PAUSE");
	return 0;
}
