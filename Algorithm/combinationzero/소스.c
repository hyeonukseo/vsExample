#include <stdio.h>

int check(int dividend, int divisor)
{
	int i, temp = 0;
	int check2 = 0, check5 = 0;

	for (i = dividend; i>dividend - divisor; i--)
	{
		temp = i;
		for (;;)
		{
			if (temp % 5 == 0)
			{
				check5++;
				temp /= 5;
			}
			
			else if (temp % 2 == 0)
			{
				check2++;
				temp /= 2;
			}
			else
				break;

		}
	}

	for (i = divisor; i >= 1; i--)
	{
		temp = i;
		for (;;)
		{
			if (temp % 5 == 0)
			{
				check5--;
				temp /= 5;
			}

			else if (temp % 2 == 0)
			{
				check2--;
				temp /= 2;
			}

			else
				break;

		}
	}

	if (check2 >= 1 && check5 >= 1)
	{
		if (check2 > check5)
			return check5;
		else
		{
			return check2;
		}
	}
	else
		return 0;


}

int main() {

	int n, m;

	scanf("%d %d", &n, &m);
	printf("%d", check(n, m));

	return 0;
}