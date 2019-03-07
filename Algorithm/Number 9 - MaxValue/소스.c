#include <stdio.h>

int main() {

	//Please Enter Your Code Here

	int i;
	int a[9];
	int max;
	int l;

	for (i = 0; i < 9; i++) //ют╥б
	{
		scanf("%d", &a[i]);
	}

	max = a[0];

	for (i = 1; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			l = i;
		}
	}

	printf("%d\n%d", max, l + 1);

	return 0;
}