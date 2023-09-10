#include <stdio.h>
#include<math.h>
int prime(int n);
int main()
{
	int n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Prime numbers between %d and 2 are: ", n);
	for (i=2; i<n; ++i)
	{
		if(prime(i) ==1)
		{
			printf("%d",i);
		}
	}
	return 0;
}
int prime(int n)
{
	if (n<2)
	{
		return 0;
	}
	int i;
	for (i=2; i<=sqrt(n); ++i)
	{
		if(n%i==0)
		{
			return 0;
			break;
		}
		return 1;
	}
}
