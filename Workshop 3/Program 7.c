#include <stdio.h>

int sumDigits(int n)
{
	int sum=0;
	do
	{
		int remainder = n%10;
		n = n/10;
		sum +=remainder;
	}
	while (n>0);
	return sum;
}
int main()
{
	int n,s;
	do
	{
		printf("Input n: ");
		scanf("%d", &n);
		if (n>=0)
		{
			s= sumDigits(n);
			printf("Sum= %d\n", s);
		}
	}
	while (n>=0);
	return 0;
}
