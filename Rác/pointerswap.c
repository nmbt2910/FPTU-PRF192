#include <stdio.h>

void swapDouble(double* p1, double* p2)
{
	double t=*p1;
	*p1 =*p2;
	*p2=t;
}

int main ()
{
	double x, y;
	printf("Enter 2 real number:");
	scanf("%lf%lf",&x,&y);
	printf("Before swapping, x=%lf, y=%lf",y, y);
	swapDouble (&x,&y);
	printf("After swapping, x=%lf, y=%lf",x, y);
fflush(stdin);
getchar();
return 0;
}	

