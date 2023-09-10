#include <stdio.h>
#include <stdlib.h>


//returntype: int, function's name: multiply
//input: integer a, integer b
//output: return a integer value which is the result of a*b

int multiply(int a , int b)
{
		return a*b;
}
 

int main()
{
	int x=6,y=7;
	int z= multiply(x,y);
	printf("%d",z);
	getchar(); getchar();
	return 0;
	
}
