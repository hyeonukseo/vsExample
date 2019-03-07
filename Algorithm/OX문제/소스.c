#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n; //input
	int i; //loop
	int a[100]; // max_storage
	int sum=0; // score_sum
	int count = 1;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			sum = sum + count;
			count++;
		}
		else
		{
			count = 1;
		}
	}

	printf("%d", sum);

	return 0;
}
