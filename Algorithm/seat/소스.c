#include <stdio.h>
int arr[1000][1000] = { 0, };
int main() {

	//Please Enter Your Code Here
	int i = 0, j = 0, k = 0;
	int c, r;
	int f;
	int flag=0;
	int count = 1;
	int find;

	scanf("%d %d", &c, &r);
	scanf("%d", &find);

	for (; count <= c*r;)
	{
		for (f = k; f < r - k; f++) 
		{
			arr[i][j] = count++;
			j++;
		}
		i = i + 1;
		j = j - 1;

		for (f = k; f < c-k-1; f++)
		{
			arr[i][j] = count++;
			i++;
		}

		i = i - 1;
		j = j - 1;

		for (f = j; f >= k; f--)
		{
			arr[i][j] = count++;
			j--;
		}

		j = j + 1;
		i = i - 1;
		k++;

		for (f = i; f >= k; f--)
		{
			arr[i][j] = count++;
			i--;
		}
		i = i + 1;
		j = j + 1;

	}

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			if (find == arr[i][j])
			{
				printf("%d %d\n", i + 1, j + 1);
				flag = 1;
			}
		}
	}

	if (flag != 1)
	{
		printf("0");
	}

	return 0;
}