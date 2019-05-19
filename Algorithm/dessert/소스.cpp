#include <stdio.h>

int n;
int arr[16];
char sign[15];
long long int sum;
int count;
int index;

void print()
{
	if (count > 19) {
		return;
	}
	else {
		for (int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
			if (i != n - 1)
				printf("%c ", sign[i]);
		}
		printf("\n");
		return;
	}
}
void getSum(int x)
{
	long long int temp[16], temp2[16];
	char ts[15], ts2[15];
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		temp[i] = arr[i];
	}

	for (int i = 0; i<n - 1; i++) {
		if (sign[i] == '.')
		{
			if (temp[i + 1] > 9)
			{
				temp[i] *= 100;
				temp[i] = temp[i] + temp[i + 1];
				temp[i + 1] = temp[i];
				temp[i] = 0;
			}
			else
			{
				temp[i] *= 10;
				temp[i] = temp[i] + temp[i + 1];
				temp[i + 1] = temp[i];
				temp[i] = 0;
			}
		}
		else
		{
			ts[cnt++] = sign[i];
		}
	}

	cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (temp[i] != 0)
		{
			temp2[cnt] = temp[i];
			cnt++;
		}
	}


	sum = temp2[0];
	for (int i = 0; i < cnt; i++)
	{
		if (ts[i] == '+')
			sum = sum + temp2[i + 1];
		else if (ts[i] == '-')
			sum = sum - temp2[i + 1];
	}

	if (sum == 0) {
		print();
		count++;
	}
}

void getSign(int x)
{
	if (x == n - 1)
	{
		sum = 0;
		getSum(0);
		return;
	}
	else

	{
		sign[x] = '+';
		getSign(x + 1);

		sign[x] = '-';
		getSign(x + 1);

		sign[x] = '.';
		getSign(x + 1);

	}
}



int main() {

	//Please Enter Your Code Here
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	getSign(0);

	printf("%d\n", count);

	return 0;
}