#include <stdio.h>

int main() {

	//Please Enter Your Code Here

	int i;
	int a[9];
	int min, sMin;
	int l;

	for (i = 0; i < 9; i++) //ÀÔ·Â
	{
		scanf("%d", &a[i]);
	}

	min = sMin = a[0];

	for (i = 1; i < 9; i++)
	{
		if (a[i] < min)
		{
			sMin = min;
			min = a[i];
			l = i;

		}
		else if (a[i] > min && a[i] < sMin || min == sMin)
		{
			sMin = a[i];
			l = i + 1;
		}

	}

	printf("%d\n%d\n", sMin, l);

	return 0;
}