#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	int i, j;
	int f = 0, flag = 0;
	char a[1000], b[1000];
	char rev_a[1000], rev_b[1000];
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

	if (strlen(rev_a) > strlen(rev_b))
	{
		for (i = strlen(b); i < strlen(a); i++)
		{
			rev_b[i] = '0';
		}
		rev_b[i] = '\0';
	}
	else if (strlen(rev_a)<strlen(rev_b))
	{
		flag = 1;
		for (i = strlen(a); i < strlen(b); i++)
		{
			rev_a[i] = '0';
		}
		rev_a[i] = '\0';
	}
	else 
	{
		if (strcmp(rev_a, rev_b)>0)
		{
			flag = 0;
		}
		else if (strcmp(rev_a, rev_b) == 0)
			flag = 0;
		else
			flag = 1;
	}

	if (flag == 0) {
		for (i = 0; i < strlen(rev_a); i++)
		{
			if (rev_a[i] >= rev_b[i])
				result[i] = rev_a[i] - rev_b[i] + '0';
			else {
				result[i] = 10 + rev_a[i] - rev_b[i] + '0';
				for (j = i + 1;; j++)
				{
					if (rev_a[j] == '0')
						rev_a[j] = '9';
					else {
						rev_a[j]--;
						break;
					}
				}
			}
		}
		result[i] = '\0';
	}
	else
	{
		for (i = 0; i < strlen(rev_b); i++)
		{
			if (rev_b[i] >= rev_a[i])
				result[i] = rev_b[i] - rev_a[i] + '0';
			else {
				result[i] = 10 + rev_b[i] - rev_a[i] + '0';
				for (j = i + 1;; j++)
				{
					if (rev_b[j] == '0')
						rev_b[j] = '9';
					else {
						rev_b[j]--;
						break;
					}
				}
			}
		}
		result[i] = '\0';
	}

	f = 0;
	j = 0;

	if (flag == 1)
		printf("-");

	for (i = strlen(result) - 1; i >= 0; i--)
	{
		if (f == 0 && result[i] == '0')
		{
			continue;
		}
		else
		{
			f = 1;
			printf("%c", result[i]);
			j++;
		}
	}

	if (f == 0)
		printf("0");

	return 0;
}