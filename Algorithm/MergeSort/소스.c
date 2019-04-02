#include <stdio.h>
#include <string.h>

void Merge(int *arr, int s1, int e1, int s2, int e2)
{
	int temp[50000];
	int temp_index = 0;
	int p, q;
	int i;

	p = s1;
	q = s2;

	while (p <= e1 && q <= e2)
	{
		if (arr[p] < arr[q])
		{
			temp[temp_index++] = arr[p];
			p++;
		}
		else
		{
			temp[temp_index++] = arr[q];
			q++;
		}
	}

	if (p > e1)
	{
		for (i = q; i <= e2; i++)
		{
			temp[temp_index++] = arr[i];
		}
	}
	else
	{
		for (i = p; i <= e1; i++)
		{
			temp[temp_index++] = arr[i];
		}
	}

	for (i = s1; i <= e2; i++)
	{
		arr[i] = temp[i - s1];
	}

}

void MergeSort(int *arr, int start, int end)
{
	int mid;
	int i;
	if (start == end)
	{
		return;
	}
	else
	{
		mid = (start + end) / 2;
		MergeSort(arr, 0, mid);
		MergeSort(arr, mid + 1, end);
		Merge(arr, 0, mid, mid + 1, end);
	}
}

int main()
{
	int n;
	int i;
	int arr[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	MergeSort(arr, 0, n-1);
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}