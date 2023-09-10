#include <stdio.h>
#include <stdlib.h>

int MAX=20;//declare global variable
int main()
{
	int a1[5];
	double* a2=NULL;//declare double pointer
	printf("MAX addr:=%u\n",%MAX);
	printf("main() addr:%u\n",&main);
	//allocate a mem. block for 10 double numbers
	//calloc(10, sizeof(double)) -> tra ve 1 pointer kieu void
	//gia su pointer do ten la void* call
	//call chua dia chi dau tien cua vung nho gom 10 phan tu keiu double
	//a2 = (double*) call; -> dang nap gia tri cua pointer call vao pointer a2
	//cho vung nho trong heap (ko phai trong stack)
	a2 =  (double*) calloc(10, sizeof(double));
	
    
	
	
	system("Pause");
	return 0;
}
