#include<stdio.h>

int gcd(int a, int b)
{
	while (a!=b)
	if (a>b)
	{
		a -=b;
	}
	else 
	{
		b -= a;
	}
	return a;
}
int lcm (int a, int b)
{
	return a*b/gcd(a, b);
}
int main()
{
	int a, b, d, m;
	do
	{
		printf("Input a: ");
		scanf("%d", &a);
		printf("Input b: ");
		scanf("%d", &b);
	}
	while (a<=0 || b<=0);
	d = gcd(a,b);
	m= lcm(a,b);
	printf("GCD= %d\n", d);
	printf("LCM= %d", m);
	return 0;
}
