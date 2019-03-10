#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int count = 0;
	int i;
	int arr[5];

	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++)
	{
		if (arr[i] == n)
			count++;
	}

	printf("%d", count);

	return 0;
}