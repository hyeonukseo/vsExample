#include <stdio.h>
int check[1000][1000] = { 0, };

int main() {

	//Please Enter Your Code Here
	int n;
	int i, j, k;
	int fi;
	int arr[1000][6] = { 0, };
	int max;
	int count = 0;

	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i<5; i++)
	{
		for (j = 0; j<n - 1; j++)
		{
			for (k = j+1; k<n; k++)
			{
				if (arr[j][i] == arr[k][i])
				{
					check[j][k] = check[k][j] = 1;
				}
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (check[i][j] == 1)
			{
				count++;
			}
		}
		arr[i][5] = count;
		count = 0;
	}
		
	max = arr[0][5];
	fi = 1;
	for (i = 1; i<n; i++)
	{
		if (max<arr[i][5])
		{
			max = arr[i][5];
			fi = i + 1;
		}
	}

	printf("%d", fi);

	return 0;
}