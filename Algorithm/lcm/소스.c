#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	long long int a, b;
	int i=2, min=1;

	scanf("%lld %lld", &a, &b);

	for (; a>i || b>i;)
	{
		if (a%i == 0 && b%i == 0)
		{
			a = a / i;
			b = b / i;
			min = min * i;
		}
		else
		{
			i++;
		}
	}

	printf("%lld", min*a*b);
	return 0;
}