#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int n;
	int a[1000][3] = {0.};
	int i, j;
	int total[1000] = { 0, };
	int max;

	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		for (j = 0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i<n; i++)
	{
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2])
		{
			total[i] = total[i] + 10000 + (a[i][0] * 1000);
		}
		else if (a[i][0] == a[i][1] || a[i][0] == a[i][2])
		{
			total[i] = total[i] + 1000 + (a[i][0] * 1000);
		}
		else if (a[i][1] == a[i][2])
		{
			total[i] = total[i] + 1000 + (a[i][1] * 1000);
		}
		else
		{
			max = a[i][0];
			for (j = 1; j<3; j++)
			{
				if (a[i][j]>max)
				{
					max = a[i][j];
				}
			}
			total[i] = total[i] + (100 * max);
		}
	}

	max = total[0];

	for (i = 1; i<n; i++)
	{
		if (total[i]>max)
			max = total[i];
	}

	printf("%d", max);

	return 0;
}