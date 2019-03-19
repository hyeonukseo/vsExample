#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[100][100] = { 0, };
	int i, j;
	int n, m;

	scanf("%d %d", &n, &m);

	for (i = 0; i<100; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}

	printf("%d", arr[n][m]);
	return 0;
}