#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int arr[1001] = { 0, };
	int a[7] = { 0, };
	int num;
	int i,j=1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		arr[num]++;
	}

	for (i = 1; i < 7 ; )
	{
		if (arr[j] >= 2)
		{
			if (i + 1 != 7) {
				a[i] = j;
				a[i + 1] = j;
				i = i + 2;
				j++;
			}
			else
			{
				a[i] = j;
				j++;
			}
		}
		else if (arr[j] > 0)
		{
			a[i] = j;
			i++;
			j++;
		}
		else
		{
			a[i] = 0;
			i++;
		}
	}
	
	if (a[6] != 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}


	return 0;
}