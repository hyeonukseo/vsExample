#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[8][8];
	int i, j, k;
	int fi, fj;
	int up, down, left, right;
	up = down = right = left = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1)
			{
				fi = i;
				fj = j;
			}
		}
	}

	for (k = 0; k <= fj; k++)
	{
		if (arr[fi][k] == 3)
			right = 0;
		else if (arr[fi][k] == 2)
			right = 1;
	}

	for (k = 7; k >= fj; k--)
	{
		if (arr[fi][k] == 3)
			left = 0;
		else if (arr[fi][k] == 2)
			left = 1;
	}

	for (k = 0; k <= fi; k++)
	{
		if (arr[k][fj] == 3)
			down = 0;
		else if (arr[k][fj] == 2)
			down = 1;
	}

	for (k = 7; k >= fi; k--)
	{
		if (arr[k][fj] == 3)
			up = 0;
		else if (arr[k][fj] == 2)
			up = 1;
	}

	if (up == 0 && down == 0 && left == 0 && right == 0)
	{
		printf("0");
	}
	else
		printf("1");

	return 0;
}