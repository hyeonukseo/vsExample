#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[10] = { 0, };
	int n_arr[1001] = { 0, };
	int sum=0;
	int max;
	int fi;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
		n_arr[arr[i]]++;
	}

	max = n_arr[10];
	fi = 10;

	for (i = 20; i <= 1000; i = i + 10)
	{
		if (max < n_arr[i])
		{
			max = n_arr[i];
			fi = i;
		}
	}

	printf("%d\n%d", sum / 10, fi);

	return 0;
}