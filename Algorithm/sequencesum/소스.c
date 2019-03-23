#include <stdio.h>

int arr[1000][1000];
int a[1000];

int main() {

	//Please Enter Your Code Here
	int i, j;
	int n;


	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	a[0] = (arr[0][n - 1] - arr[1][n - 1] + arr[0][1]) / 2;

	for (i = 1; i<n; i++)
	{
		a[i] = arr[0][i] - a[0];
	}

	for (i = 0; i<n; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}