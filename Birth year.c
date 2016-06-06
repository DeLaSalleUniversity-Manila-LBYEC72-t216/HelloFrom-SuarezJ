#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int y,a;
	printf(" Enter birth year: ");
	scanf("%d", &y);
	a=2016-y;
	printf("\n Estimated age: %d\n\n", a);
	system("PAUSE");
	return 0;
}
