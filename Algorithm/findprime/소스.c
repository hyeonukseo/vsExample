#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int i,j;
	int arr[100];
	int flag = 0;
	int count = 0;

	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i<n; i++)
	{
		for (j = 2; j< arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				flag = 0;
				break;
			}
			else {
				flag = 1;
			}
		}
		if (flag==1 || arr[i]==2)
			count++;
	}

	printf("%d", count);

	return 0;
}