#include <stdio.h>

int main()
{

	int n, arr[100000], i, j;
	int flag = 0;
	int arr_m[99999];
	int min;
	int gcd=1;
	int count = 0;

	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		arr_m[i] = arr[i+1] - arr[i];
	}

	min = arr_m[0];

	for (i = 1; i < n-1; i++)
	{
		if (arr_m[i] < min)
			min = arr_m[i];
	}

	for (i = 2; i <= min; i++)
	{
		for (j = 0; j < n-1; j++)
		{
			if (arr_m[j] % i == 0)
			{
				flag = 0;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			gcd = i;
	}

	for (i = arr[0]; i <= arr[n-1]; i = i + gcd)
	{
		count++;
	}

	printf("%d", count-n);

	return 0;
}