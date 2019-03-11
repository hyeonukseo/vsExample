#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n, m;
	int arr[100][100];
	int i, j;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = m - 1; j >= 0; j--)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}