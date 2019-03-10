#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[5];
	int i;
	int num=0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		num = num + (arr[i] * arr[i]);
	}

	printf("%d", num % 10);

	return 0;
}