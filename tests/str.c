#include "../main.h"

int main(void)
{
	int n, a;

	n = _printf("trash%%\n");
	printf("n = %d\n", n);
	a = printf("trash%%\n");
	printf("a = %d\n", a);

	return (0);
}
