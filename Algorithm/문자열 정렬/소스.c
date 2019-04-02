#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	int i, j, n;
	char arr[100][100];
	char temp[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}

	for (i = 0; i < n; i++)
	{

		for (j = 0; j <= n - i - 2; j++)
		{
			if (strcmp(arr[j], arr[j + 1])>0)
			{
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], temp);
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%s\n", arr[i]);
	}

	return 0;
}