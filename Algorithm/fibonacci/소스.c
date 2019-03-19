#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[46] = { 0, };
	int i;
	int n;

	arr[0] = 0;
	arr[1] = 1;

	scanf("%d", &n);

	for (i = 2; i<46; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	printf("%d", arr[n]);

	return 0;
}