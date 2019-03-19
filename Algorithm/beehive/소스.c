#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int i;
	int n, k = 1;;

	scanf("%d", &n);

	for (i = 1; k < n; i++)
	{
		k = k + (6 * i);
	
	}

	printf("%d", i);

	return 0;
}