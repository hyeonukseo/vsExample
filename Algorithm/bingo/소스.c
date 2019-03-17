#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[5][5];
	int n_arr[5][5];
	int i, j, k, h, o, p;
	int bingo[12] = { 0, };
	int bingo_count = 0;
	int count = 0;
	int sum_row = 0, sum_col = 0, sum_dig = 0, sum_rdig = 0;
	int flag = 0;

	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
		{
			scanf("%d", &n_arr[i][j]);
		}
	}

	for (i = 0; i<5; i++)
	{
		for (j = 0; j<5; j++)
		{
			bingo_count = 0;
			for (k = 0; k<5; k++)
			{
				for (h = 0; h<5; h++)
				{
					if (n_arr[i][j] == arr[k][h])
					{
						arr[k][h] = 0;
						count++;
						flag = 1;
						break;
					}
				}
				if (flag == 1)
				{
					flag = 0;
					break;
				}
			}

			for (o = 0; o<5; o++)
			{
				sum_dig = sum_dig + arr[o][o];
				sum_rdig = sum_rdig + arr[0 + o][4 - o];

				for (p = 0; p < 5; p++)
				{
					sum_row = sum_row + arr[o][p];
					sum_col = sum_col + arr[p][o];
				}

				if (sum_row == 0)
				{
					bingo_count++;
					if (bingo_count == 3)
					{
						printf("%d\n", count);
						return 0;
					}
				}
				else
				{
					sum_row = 0;
				}


				if (sum_col == 0)
				{
					bingo_count++;
					if (bingo_count == 3)
					{
						printf("%d\n", count);
						return 0;
					}
				}
				else
				{
					sum_col = 0;
				}

				sum_row = 0;
				sum_col = 0;
			}

			if (sum_dig == 0)
			{
				bingo_count++;
				sum_dig = 0;
				if (bingo_count == 3)
				{
					printf("%d\n", count);
					return 0;
				}
			}


			if (sum_rdig == 0)
			{
				bingo_count++;
				sum_rdig = 0;
				if (bingo_count == 3)
				{
					printf("%d\n", count);
					return 0;
				}
			}

			sum_dig = 0;
			sum_rdig = 0;



		}
	}


	return 0;
}