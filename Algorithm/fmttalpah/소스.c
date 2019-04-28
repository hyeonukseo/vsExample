/*
#include <stdio.h>

int main() {

	int x, y;
	scanf("%d %d", &x, &y);
	int gap = y - x;

	int index = 1;
	int middle = 1;
	int i;
	for (i = 1; index<gap; i++){
		index += middle;
		if (i % 2 != 0){
			middle++;
		}
	}

	printf("%d", i);
	return 0;
}
*/
#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int  x, y;
	int i;
	int half = 1;
	int start = 1;

	scanf("%d %d", &x, &y);

	for (i = 1; start<y-x; i++)
	{
		start = start + half;
		if (i % 2 != 0)
			half++;
	}

	printf("%d", i);

	return 0;
}