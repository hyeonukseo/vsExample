#include <stdio.h>

int n, r;
char result[100];
bool check[100];

void getResult(int x)
{
	if (x >= r){
		printf("%s\n", result);
	}
	else{
		for (int i = 0; i<n; i++)
		{
			char alpha = i + 'a';
			if (check[i] == false){
				result[x] = alpha;
				check[i] = true;
				getResult(x + 1);
				check[i] = false;
				result[x] = 0;
			}
		}
	}
}
int main() {

	//Please Enter Your Code Here
	scanf("%d %d", &n, &r);
	getResult(0);
	return 0;
}