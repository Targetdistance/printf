#include "../main.h"

int main(void)
{
	int n, a, len1, len2;

	len1 = _printf("My name is %s, and my math grade is %c\n", "Joseph", 'D');
	len2 = printf("My name is %s, and my math grade is %c\n", "Joseph", 'D');
	n = _printf("trash%%\n");
	printf("n = %d\n", n);
	a = printf("trash%%\n");
	printf("a = %d\n", a);
	printf("length: %d\n", len1);
	printf("length: %d\n", len2);

	return (0);
}
