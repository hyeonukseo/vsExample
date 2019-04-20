#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	int i, j;
	int len;
	char a[1000], b[1000];
	char rev_a[1000], rev_b[1000];
	char temp;
	char result[1000];


	scanf("%s", a);
	scanf("%s", b);

	for (j = 0, i = strlen(a) - 1; i >= 0; j++, i--)
	{
		rev_a[j] = a[i];
	}
	rev_a[j] = '\0';

	for (j = 0, i = strlen(b) - 1; i >= 0; j++, i--)
	{
		rev_b[j] = b[i];
	}
	rev_b[j] = '\0';


	if (strlen(rev_a) >= strlen(rev_b))
	{
		for (i = strlen(b); i < strlen(a); i++)
		{
			rev_b[i] = '0';
		}
		rev_b[i] = '\0';
		len = strlen(rev_a);
	}
	else 
	{
		for (i = strlen(a); i < strlen(b); i++)
		{
			rev_a[i] = '0';
		}
		rev_a[i] = '\0';
		len = strlen(b);
	}


	for (i = 0; i<len  ; i++)
	{
		result[i] = rev_a[i] + rev_b[i] - '0';
		if (result[i] > '9')
		{
			result[i] = result[i] - 10;
			
			if (rev_a[i + 1] != '\0')
				rev_a[i + 1]++;
			else
			{
				result[i + 1] = '1';
				result[i + 2] = '\0';
				break;
			}
		}
	}



	for (i = strlen(result) - 1; i >= 0; i--)
		printf("%c", result[i]);

	return 0;
}