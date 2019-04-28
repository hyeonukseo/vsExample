#include <stdio.h>

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main() {

	//Please Enter Your Code Here
	int n;
	int result;

	scanf("%d", &n);

	result = factorial(n);
	printf("%d", result);
	return 0;
}