#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n, s;
	int a[10000];
	int i,j;


	//scanf("%d %d", &n, &s);
	n = 20;
	s = 5;
	for (i = 0; i < n*n ; i++)
	{
		a[i] = s;

		if (s != 9)
		{
			s++;
		}
		else
		{
			s = 1;
		}
	}

	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		
		if (i % 2 == 1)
		{
			for (j = i*i; j <= (i*i) + (2 * i); j++)
			{
				printf("%d", a[j]);
			}
		}
		else {
			for (j = (i*i) + (2 * i); j >= i*i; j--)
			{
				printf("%d", a[j]);
			}
		}

		printf("\n");
	}
	

	return 0;
}