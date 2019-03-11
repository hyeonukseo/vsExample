#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	
	int arr[10][10] = { 0, };
	int i, j;
	int n;

	scanf("%d", &n);

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < n; j++) 
		{
			if (arr[i][j] == 0 || arr[j][i] == 0)
			{
				arr[i][j] = 1;
				arr[j][i] = 1;
			}
			else
			{
				arr[i][j] = 0;
				arr[j][i] = 0;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}