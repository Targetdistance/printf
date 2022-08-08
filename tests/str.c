#include "../main.h"

int main(void)
{
	char y = 'a';
	char ts[6] = "print";

	_printf("Let's try to %s %c simple sentence\n", ts, y);
	printf("Let's try to %s %c simple sentence\n", ts, y);
	return (0);
}
