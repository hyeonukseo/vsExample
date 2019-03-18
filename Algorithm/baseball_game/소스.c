#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int i, j, k, l;
	int n;
	int input;
	int arr[100][5];
	int strike;
	int ball;
	int flag = 0;
	int count = 0;
	
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &input);

		arr[i][0] = input / 100;
		arr[i][1] = (input - arr[i][0] * 100) / 10;
		arr[i][2] = input - (arr[i][0] * 100) - (arr[i][1] * 10);
	    
		scanf("%d", &arr[i][3]);
		scanf("%d", &arr[i][4]);
	}

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 1; k <= 9; k++)
			{
				if (i != j && j != k && k != i)
				{
					for (l = 0; l < n; l++)
					{
						strike = 0;
						ball = 0;

						if (i == arr[l][0])
						{
							strike++;
						}
						else if (i == arr[l][1] || i == arr[l][2])
						{
							ball++;
						}

						if (j == arr[l][1])
						{
							strike++;
						}
						else if (j == arr[l][0] || j == arr[l][2])
						{
							ball++;
						}

						if (k == arr[l][2])
						{
							strike++;
						}
						else if (k == arr[l][1] || k == arr[l][0])
						{
							ball++;
						}

						if (strike != arr[l][3] || ball != arr[l][4])
						{
							flag = 1;
							break;
						}
						else
							flag = 0;
					}

					if (flag == 0)
						count++;
				}
			}
		}
	}

	printf("%d", count);

	return 0;
}