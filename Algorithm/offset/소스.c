#include <stdio.h>

int main()
{
	int i, j;
	int arr[7][7];

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			arr[i][j] = 9;
		}
	}

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j] && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1])
			{
				arr[i][j] = -1;
			}
		}
	}


	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (arr[i][j] != -1) {
				printf("%d ", arr[i][j]);
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}

	return 0;
}