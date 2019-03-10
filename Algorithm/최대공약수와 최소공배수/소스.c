#include <stdio.h>

int main()
{

	int a, b, i;
	
	int min=1, max=1;

	scanf("%d %d", &a, &b);
	i = 2;
	for (;a>i || b>i;)
	{
		if (a%i == 0 && b%i == 0)
		{
			a = a / i;
			b = b / i;
			min = min * i;
		}
		else
		{
			i++;
		}
	}

	printf("%d %d", min, min*a*b);

	return 0;
}