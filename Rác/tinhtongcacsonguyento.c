#include <stdio.h>

int isPrime(int i)
{
	int n=2;
	int bisPrime = 1;
	while (n<i)
	{
		if (i%n==0)
		{
			bisPrime = 0;
		}
		n++;
	}
	return bisPrime;
}


int main()
{
	printf("%d\tPrime:%d",9,isPrime(9));
	getchar();
	getchar();
	return 0;
}
