#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int arr[1000][3];
	int i, j, n=0;
	int flag = 0;

	for (i = 0; i < 1000; i++)
	{

		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
			
		if (arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 0)
			break;
			
		n++;
		
	}

	for (i = 0; i < n; i++)
	{
		if ((arr[i][2] - arr[i][1]) == (arr[i][1] - arr[i][0]))
		{
			printf("AP %d\n", arr[i][2] + (arr[i][2] - arr[i][1]));
		}
		else
		{
			printf("GP %d\n", arr[i][2] * (arr[i][1] / arr[i][0]));
		}
	}
	return 0;
}