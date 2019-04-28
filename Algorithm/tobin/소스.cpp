#include <stdio.h>

int n, r;
char result[31];

void getResult(int x, int count)
{
	if (x == n){
		if (count==r)
			printf("%s\n", result);
	}
	else {
		for (int i = 1; i >= 0; i--)
		{
			if (count > r)
			{
				return;
			}

			char a = i + '0';
			result[x] = a;
			
			getResult(x + 1, count + i);
			result[x] = 0;
		}
	}
}
int main() {

	//Please Enter Your Code Here
	scanf("%d %d", &n, &r);
	getResult(0, 0);
	return 0;
}