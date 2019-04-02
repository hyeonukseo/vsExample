#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	int i, j = 0;
	char arr[1000];

	fgets(arr, 1000, stdin);

	for (i = strlen(arr) - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}

	return 0;
}