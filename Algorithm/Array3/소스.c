#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int arr[100][100];
	int i, j, k;
	int count = 1;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		k = 0;
		for (j = i; j >= 0; j--)
		{
			arr[k][j] = count++;
			k++;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-i ; j++ )
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}