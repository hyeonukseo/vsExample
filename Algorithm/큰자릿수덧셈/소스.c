#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	int i, j, n, max, cp;
	int flag = 0;
	int ai=0, aj=0;
	int size = 0;
	char a[100], b[100];
	char rev_a[100], rev_b[100];
	char temp[1000];

	for (i = 0; i < 1000; i++)
		temp[i] = '0';


	scanf("%s", a);
	scanf("%s", b);

	j = 0;
	if (strlen(a) > strlen(b))
		max = strlen(a);
	else
		max = strlen(b);



	for (i = max - 1; i >= 0; i--)
	{
		if (a[i] != '\0') {
			rev_a[ai] = a[i];
			ai++;
		}

		if (b[i] != '\0') {
			rev_b[aj] = b[i];
			aj++;
		}
		
	}

	if (ai > aj)
	{
		for (i = aj; i < ai; i++)
			rev_b[i] = '0';
	}
	else
	{
		for (i = ai; i < aj; i++)
			rev_a[i] = '0';
	}

	rev_a[i] = rev_b[i] = '\0';

	for (i = 0; i < max; i++)
	{
		cp = temp[i] - '0' + rev_a[i] - '0' + rev_b[i] - '0';
		if (cp > 9)
		{
			cp = cp - 10;
			temp[i] = '0' + cp;
			temp[i + 1] = '1';
		}
		else
		{
			temp[i] = '0' + cp;
		}
	}
	temp[i+1] = '\0';

	size = strlen(temp);
	if (temp[size - 1] == '0')
		size--;

	for (i = size -1; i >= 0; i--)
		printf("%c", temp[i]);
	printf("\n");

	return 0;
}