#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int i;
	int input;

	scanf("%d", &input);

	for (i=2;input!=i;)
	{
		if (input%i == 0) {
			printf("%d\n", i);
			input /= i;
		}
		else
			i++;
	}
	printf("%d\n", input);


	return 0;
}