#include <stdio.h>

int main() {

	//Please Enter Your Code Here
	int a, b, c, d;
	int e, f, g, h;
	int	r, temp;
	int i, min = 1;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	
	e = a*d + b*c;
	f = b*d;

	g = e;
	h = f;
	
	for (;f!=0 ;)
	{		
		e = e%f;

		temp = e;
		e = f;
		f = temp;

	}

	printf("%d %d", g/e, h/e);
	return 0;
}