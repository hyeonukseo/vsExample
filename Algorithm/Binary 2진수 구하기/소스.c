/*
#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int i,j;
	int binary[10]; // n이 1000이하 이므로 2^10 -> 10개만

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
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	int iter = 0;
	int* arr = NULL;
	scanf_s("%d", &num);
	if (num == 1)
	{
		printf("1");
	}
	else
	{
		arr = (int*)malloc(sizeof(num)*(num / 2));
		while (1)
		{

			if (num % 2 == 1)
				arr[iter++] = 1;
			else
				arr[iter++] = 0;
			num /= 2;
			if (num == 0) break;
		}
		for (int i = iter - 1; i >= 0; i--)
		{
			printf("%d", arr[i]);
		}
	}
	return 0;
}