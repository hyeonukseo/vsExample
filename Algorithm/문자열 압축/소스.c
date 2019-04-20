#include <stdio.h>
#include <string.h>

int main() {

	//Please Enter Your Code Here
	char arr[100];
	char p;
	int i;
	int count = 1;

	scanf("%s", arr);
	
	p = arr[0];

	for (i = 1; ;i++)
	{
		if (p != arr[i])
		{
			if (count == 1)
				printf("%c", p);
			else
				printf("%d%c", count, p);
			if (arr[i] == '\0')
				break;
			p = arr[i];
			count = 1;
		}
		else if (p == arr[i])
		{
			count++;
		}
	}
	

	return 0;
}