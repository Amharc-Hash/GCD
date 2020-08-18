#include<stdio.h>
int main()
{
	int x,y,i;
	printf("Enter first number :");
	scanf_s("%d", &x);
	printf("Enter second number :");
	scanf_s("%d", &y);
	int min = x < y ? x : y;
	i = min;
	while (i >= 1)
	{
		if (x%i==0 && y%i==0)
		{
			break;
		}
		else
		{
			i--;
		}
	}
	printf("Greatest common divisor = %d", i);
	return 0;
}
