#include <stdio.h>
#include <stdlib.h>

int MAX=20;
int main()
{
	int a[] = {2, 4, 6, -2};
	int i;
	for (i = 0; i<4; i++)
	{
	//a+i --> a+i * sizeof(int) = a+i**4
	//(voi a la dia chi dau tien cua mang a)
	printf("a[%d], addr: %u, %u\n", i, a+i,&a[i]);
	
}
	for(i=0;i<4;i++)
	{
		printf("a[%d], val:%d\n", i, *(a+i), a[i] );
	}
system("pause");
return 0;
}
