#include <stdio.h>

int n, k;
int arr[21];
int count;

void division(int x, int sum,int index)
{
	
	if (sum == n)
	{
		for (int i = 0; i < n; i++) {
			if (arr[i] == 0)
				break;
			printf("%d", arr[i]);
			if (arr[i + 1] != 0)
			{
				printf("+");
			}
		}
		printf("\n");
		count++;
		return;
	}
	else {
		for (int i = n - index; i >= 1; i--)
		{
			if (sum >= n)
			{
				return;
			}
			if (arr[x] == 0) {
				arr[x] = i;
			}

			sum = sum + arr[x];
			division(x + 1, sum, index);
			sum = sum - arr[x];
			arr[x] = 0;

			if (arr[index-1] == 0)
				index++;
		}
	}
}

int main() {

	//Please Enter Your Code Here
	scanf("%d", &n);
	division(0, 0, 1);
	printf("%d\n", count);

	return 0;
}