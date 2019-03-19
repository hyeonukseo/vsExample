#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int i, j;
	int n, m;
	int count = 0;
	int sum = 1;

	scanf("%d %d", &n, &m);

	for (i = n; i >= 1; i--)
	{
		for (j = m; j >= 1; j--)
		{
			sum = sum * (n * (1 / m)*(1 / (n - m)));
			if ((int)sum % 10 == 0)
				count++;
		}
	}

	printf("%d", count);

	return 0;
}