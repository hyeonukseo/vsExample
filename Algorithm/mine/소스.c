#include <stdio.h>

int main() {

	//Please Enter Your Code Here

	int n, m;
	int arr[102][102] = { 0, };

	int x, y, i, j;
	int count = 0;

	scanf("%d %d", &n, &m);
	scanf("%d %d", &x, &y);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	if (arr[x][y] == 1)
	{
		printf("game over");
	}
	else
	{
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (arr[i][j] == 1)
				{
					count++;
				}
			}
		}

		printf("%d", count);

	}

	return 0;
}