#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int a[10], b[10];
	int i;
	int scoreA = 0, scoreB = 0;

	for (i = 0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i<10; i++)
	{
		scanf("%d", &b[i]);
	}

	for (i = 0; i<10; i++)
	{
		if (a[i]>b[i])
		{
			scoreA++;
		}
		else if (b[i]>a[i])
		{
			scoreB++;
		}
	}

	if (scoreA>scoreB)
	{
		printf("A");
	}
	else if (scoreB>scoreA)
	{
		printf("B");
	}
	else
	{
		printf("D");
	}

	return 0;
}