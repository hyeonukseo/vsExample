#include <stdio.h>

void printBinary(int x)
{
	if (x == 0)
		printf("0");
	else if (x == 1)
		printf("1");
	else
	{
		printBinary(x / 2);
		printf("%d", x % 2);
	}
}

int main()
{
	int x;

	scanf("%d", &x);
	printBinary(x);

	return 0;
}