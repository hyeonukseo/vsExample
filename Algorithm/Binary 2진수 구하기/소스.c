#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int i,j;
	int binary[10]; // n�� 1000���� �̹Ƿ� 2^10 -> 10����

	scanf("%d", &n);

	for (i=0 ; ; i++ )
	{
		if (n / 2 >= 1) 
		{
			binary[i] = n % 2;
			n = n / 2;
		}
		else
		{
			binary[i] = n % 2;
			break;
		}
	}

	for (j = i; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}

	return 0;
}