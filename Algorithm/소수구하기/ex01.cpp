#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int a, b, c, i;

	scanf("%d %d", &a, &b);

	for (i = a; i <= b; i++)
	{
		for (c = 2; i%c != 0; c++)
		if (i == 1)
			break;

		if (c == i)
			printf("%d ", c);
		else
			c = 2;
	}

	return 0;
}