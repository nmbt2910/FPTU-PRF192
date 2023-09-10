#include <stdio.h>
#include <stdlib.h>

int main()
{
	int isDigit=0, isLetter=0, others=0;
	printf("Enter c: ");
	char c = getchar();
	while(c != '\n')
	{
		if (c>='a' && c<='z' || c>='A' && c<='Z')
		isLetter++;
		else if(c>='0' && c<='9')
		isDigit++;
		else 
		others++;
		c = getchar();
	}
	printf("%d,%d,%d",isDigit,isLetter,others);
	system('pause');
	return 0;
}
