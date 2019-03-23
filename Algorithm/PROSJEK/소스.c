#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int arr_A[100], arr_B[100];
	int i, j;
	int sum=0;

	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr_B[i]);
	}

	arr_A[0] = arr_B[0];

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j<i; j++)
		{
			sum = sum + arr_A[j];
		}
		arr_A[i] = (i + 1)*arr_B[i] - sum;
		sum = 0;
	}

	for (i = 0; i<n; i++)
		printf("%d ", arr_A[i]);

	return 0;
}