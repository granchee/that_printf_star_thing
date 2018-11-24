#include <stdio.h>

int main()
{
	float b = 6.412355;

	int a = 3;
	printf("%.*f\n", a, b);

	a = 5;
	printf("%.*f\n", a, b);

	char *s = "123456789012345678";
	printf("%s\n", s);
	printf("%.16s\n", s);

	int c = 16;
	printf("%.*s\n", c, s);

	c = 99;
	printf("%.*s<--End of string\n", c, s);

	int i = 1;
	for (; i < 14; ++i)
	{
		printf("%.*s\n", i, s);
	}

	return 0;
}

