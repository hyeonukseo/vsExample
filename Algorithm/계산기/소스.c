#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);

	if (c == '+')
		printf("%d", a + b);
	else if (c == '-')
		printf("%d", a - b);
	else if (c == '*')
		printf("%d", a*b);
	else if (c == '/')
		printf("%d", a / b);

	return 0;
}