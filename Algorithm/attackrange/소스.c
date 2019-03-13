#include <stdio.h>

int main() {


	//Please Enter Your Code Here
	int maps[200][200] = { 0, };
	int att[101][101] = { 0, };
	int n, x, y, r;
	int c, i, j, k = 1;


	scanf("%d", &n);
	scanf("%d %d %d", &x, &y, &r);

	//미사일 범위
	for (i = 0; i < 2 * r + 1; i++)
	{
		c = r;

		if (i <= r) {
			for (j = r - i; j <= r + i; j++)
			{
				att[i][j] = c;
				if (c == 0)
				{
					att[i][j] = -1;
				}
				if (j >= r)
					c++;
				else
					c--;
			}
		}
		else
		{
			for (j = k; j <= 2 * r - k; j++)
			{
				att[i][j] = c;
				if (j >= r)
					c++;
				else
					c--;
			}
			k++;
		}
	}

	//맵에 출력
	for (i = 0; i < 2 * r + 1; i++)
	{
		for (j = 0; j < 2 * r + 1; j++)
		{
			if (i + x - r - 1 >= 0 && j + y - r - 1 >= 0)
				maps[i + x - r - 1][j + y - r - 1] = att[i][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (maps[i][j] != -1)
				printf("%d ", maps[i][j]);
			else
				printf("x ");
		}
		printf("\n");
	}

	return 0;
}