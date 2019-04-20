#include <stdio.h>
#include <string.h>


int main() {

	//Please Enter Your Code Here

	int i, left, right;
	int check, flag=0;
	char arr[1000];

	left = 0;
	scanf("%s", &arr);
	right = strlen(arr);
	if (right % 2 == 0)
	{
		check = 0;
	}
	else
		check = 1;
	right--;
	
	for (i = 0;; i++)
	{
		if (check == 0) {
			if (arr[left] == arr[right])
			{
				flag = 0;
			}
			else
			{
				flag = 1;
				break;
			}
			left++;
			right--;
			if (left == right + 1)
				break;
		}
		else
		{
			if (arr[left] == arr[right])
			{
				flag = 0;
			}
			else
			{
				flag = 1;
				break;
			}
			if (left == right)
				break;
			left++;
			right--;
			
		}
	}

	if (flag == 0)
		printf("YES");
	else
		printf("NO");


	return 0;
}