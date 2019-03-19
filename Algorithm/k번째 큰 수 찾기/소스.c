#include <stdio.h>

int arr[100000];

int main() {

	//Please Enter Your Code Here
	int i, j;
	int n, k;
	int temp;

	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (i+1 == k)
			break;
	}

	printf("%d", arr[n - k]);



	return 0;
}