#include <stdio.h>

int main()
{
	int n=7, m=6;
	int*pn=&n;// khoi tao
	//pointer ten pn tro toi bien kieu int la n
	int*pm=&m;//khoi tao
	//pointer ten pm tro toi bien kieu int la m
	//*pn tuong duong n;
	//*pm tuong duong m;
	//n = 2*m+m*n = 2*6+6*7=54
	*pn = 2*(*pm) + m*n;
	//m = 3*m -n = 3*6 - 54= 18 - 54 = -36
	*pm += 3*m - (*pn);//*pm+= -36+6 =-30
	printf("m=%d, n=%d\n", m, n);//m=-30, n=54
	getchar();
	return 0;
}
