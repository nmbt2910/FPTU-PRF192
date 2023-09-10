#include <stdio.h>
//result=1; date is valid
//result=0; not valid

int isDateValid(int m, int d, int y)
{
	int result = 1;
	switch (m)
	{
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			break;
		default:
			if (d==31)
			result = 0;//invalid		
	}
	if (m==2)
	{
		int isLeapYear =(y%4==0 && y%400!=0) || (y%100==0);
		if (isLeapYear==1)
	{
		if (d>29)
		result =0;	
	}
		else 
	{
		if (d>28)
		result =0;
	}
	return 0;
}

int main()
{
	// input m, d, y
	int m, d, y;
	
	//m>=0 && m<=12
	do
	{
		printf("Please input m:");
		scanf("%d",&m);
	}
	while (m<0 || m>12);
	//date >=0 && date <=31
	do 
	{
		printf("Please input date:");
		scanf("%d",&d);
	}
	while (d<0 || d>31);
	// || la dau hoac
	// year>0
	do
	{
		printf("Please input year:");
		scanf("%d",&y);
	}

}
