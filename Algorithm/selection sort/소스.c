#include <stdio.h>

int main()
{
	int i, j;
	int index;
	int temp;
	int data[5];

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &data[i]);
	}

	for (i = 0; i < 5; i++) {
		index = i;
		for (j = i; j < 5; j++)
		{
			if (data[index] > data[j])
			{
				index = j;
			}
		}

		temp = data[i];
		data[i] = data[index];
		data[index] = temp;

		printf("\n%d È¸Â÷\n", i + 1);
		for (j = 0; j < 5; j++)
		{
			printf("%d ", data[j]);
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}