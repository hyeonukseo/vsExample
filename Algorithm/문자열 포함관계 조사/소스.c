#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	int i, j, n;
	int flag = 0;
	char a[1000], b[1000];
	char temp[1000];


	scanf("%s", a);
	scanf("%s", b);


	for (i = 0; i < strlen(a); i++)
	{

		for (j = 0; j < strlen(b); j++)
		{
			temp[j] = a[i+j];
		}
		temp[j] = '\0';

		if (strcmp(temp, b) == 0)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}

	}

	if (flag == 1)
		printf("YES");
	else
		printf("NO");

	return 0;
}