#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int i, j, k, max;
	int flag = 0;
	int count = 0;
	int input[1000];
	int check[246912];

	scanf("%d", &input[0]);
	max = input[0];
	for (i = 1; input[i - 1] != 0; i++)
	{
		scanf("%d", &input[i]);
		if (max < input[i])
			max = input[i];

	}

	for (j = 2; j <= max * 2; j++) {
		check[j] = j;
	}

	for (j = 2; j <= max; j++)
	{
		if (check[j] == 0)
			continue;
		for (k = j + j; k <= max * 2; k = k + j)
		{
			check[k] = 0;
		}
	}

	for (j = 0; j < i - 1; j++){
		for (k = input[j] + 1; k <= 2 * input[j]; k++)
		{
			if (check[k] != 0)
				count++;
		}
		printf("%d\n", count);
		count = 0;
	}

	return 0;
}