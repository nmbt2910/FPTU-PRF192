#include <stdio.h>
#include<math.h>

int getRelPos(double x, double y, double r);
int main()
{
	double x, y ,r, result;
	printf("Input point (format as follow: x,y): ");
	scanf("%d,%d", &x, &y);
	do
	{
		printf("Input r: ");
		scanf("%d", &r);
	}
	while (r<0);
	result = getRelPos (x, y ,r);
	if (result =1)
	{
		printf("The point is inside of the circle");
	}
	else if (result ==0)
	{
		printf("The point is on the circle");
	}
	else
	{
		printf("The point is outside of the circle");
	}
}

int getRelPos(double x, double y, double r)
{
	double d2=x*x + y*y;
	double r2=r*r;
	if(d2<r2) return 1;
	else if(d2==r2) return 0;
	return -1;
}

