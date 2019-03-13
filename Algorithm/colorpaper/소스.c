#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[101][101] = { 0, };
	int n_arr[101][4] = { 0, };
	int i, j, k, n, count = 0;

	scanf("%d", &n);

	for (i = 1; i<=n; i++)
	{
		scanf("%d %d %d %d", &n_arr[i][0], &n_arr[i][1], &n_arr[i][2], &n_arr[i][3]);
	}

	for (i = 1; i<=n; i++)
	{
		for (j = n_arr[i][1]; j<n_arr[i][1] + n_arr[i][3]; j++)
		{
			for (k = n_arr[i][0]; k<n_arr[i][0] + n_arr[i][2]; k++)
			{
				arr[k][j] = i;
			}
		}
	}

	for (k = 1; k<=n; k++) {
		for (i = 0; i<101; i++)
		{
			for (j = 0; j<101; j++)
			{
				if (arr[i][j] == k)
				{
					count++;
				}
			}
		}
		printf("%d\n", count);
		count = 0;
	}

	return 0;
}