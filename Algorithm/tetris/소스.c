#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int c, r;
	int i, j, k;
	int arr[20][20];
	int n_arr[20] = { 0, };
	int flag = 0;
	int find[20][2] = { 0, };
	int find_i;
	int max;

	scanf("%d %d", &c, &r);
	
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
		{
			if (arr[j][i] == 0)
			{
				n_arr[i]++;
			}
			else
				break;
		}
	}

	for (i = 0; i < c; i++)
	{
		if (n_arr[i] < 4)
		{
			flag = 1;
		}
		else
		{
			for (j = n_arr[i] - 4; j < n_arr[i]; j++)
			{
				arr[j][i] = 1;
				for (k = 0; k < c; k++)
				{
					if (arr[j][k] == 1)
					{
						flag = 2;
					}
					else
					{
						flag = 3;
						break;
					}
				}
				arr[j][i] = 0;
				if (flag == 2)
				{
					find[i][0] = i + 1;
					find[i][1]++;
				}
			}
		}
	}

	max = find[0][1];
	find_i = 0;
	for (i = 1; i < c; i++)
	{
		if (max < find[i][1])
		{
			max = find[i][1];
			find_i = i;
		}
	}

	printf("%d %d", find[find_i][0], find[find_i][1]);

	return 0;
}