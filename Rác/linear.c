#include <stdio.h>

int linearSeach(int a[], int n)
{
	//to do
	//tim vi tri cua x trong mang a gom n phan tu
	//cach tim duyet tung phan tu trong mang a
	//cho den khi phan tu do bang x
	// thi tra ve index cua phan tu do cho ng dung
	int index=-1;
	int i;
	for(i=0;i<n;i++)
	{
		if (a[i] == x)
		return i;
	}
	return index;
	//-1 notfound
	//otherwise found
 } 
 
int main()
{
	int a[8]= {5, 9, 2, 7, 6, 5, 2, 5};
	int x=6;
	
	int index = linearSearch(x, a, 8);
	printf("Index of %d is %d", x, index);
	system("pause");
	return 0;
}
