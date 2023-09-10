#include <stdio.h>
int main()
{
	int x, y;
	do
	{
		scanf("%d%d",&x, &y);
		int t = x, x=y, y=t;
		printf("After Swap: %d %d\n",x, y);
		printf("\n");
	}
	while (x !=0 && y!=0);
}
