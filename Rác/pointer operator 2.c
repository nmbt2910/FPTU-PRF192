#include <stdio.h>

int main ()
{
	int n=7, m= 6;
	int*pn = &n;
	int*pm= &m;
	//pn = n = 6 + (2*6) - (3*7)=-3
	*pn = *pm + 2*m - 3*n;
	//pm -= 6 - (-3) = 9
	*pm -= *pn;
	printf("%d", m+n);
	getchar();
	return 0;
}
