#include <stdio.h>

int main() {

	int n, arr[100];
	int i, j;
	int temp;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
	
		for (j = 0; j <= n - i - 2; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}


	}
	printf("\n");

	printf("\n");
	for (j = 0; j < n; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");

	return 0;
}