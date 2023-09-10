#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int intRandom( int min_num, int max_num);

int main()
{
	int total;
	int count, x, y;
	do
	{
		printf("Ball Lottery\n");
		printf("============\n"); 
		printf("Total sought: ");
		scanf("%d", &total);
	}
	while (total <2 || total >20);
	count=1;
	srand((unsigned int)time(NULL));
	do
	{
		x=intRandom(1,10);
		y=intRandom(1,10);
		printf("Result of pick %d: %d + %d\n", count, x, y);
		count++;
	}
	while (x+y!=total);
	printf("You got your total in %d picks!", count-1);
}

intRandom(int min_num, int max_num)
{
	int a, b;
	do
	{
		a= rand()%10;
	}
	while (a<min_num || a>max_num);
	return a;
	
	do
	{
		b=rand()%10;
	}
	while (b<min_num || b>max_num);
	return b;
}

