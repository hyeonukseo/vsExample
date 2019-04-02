#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	int i,j=0;
	char arr[100000];
	char temp[100000];

	fgets(arr, 1000, stdin);

	for (i = 0; i < strlen(arr); i++)
	{
		if (arr[i] != ' ')
		{
			temp[j] = arr[i];
			j++;
		}
	}
	temp[j] = '\0';

	printf("%s", temp);
	return 0;
}