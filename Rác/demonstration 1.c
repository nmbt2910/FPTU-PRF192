#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int exist (char* filename)
{
	int existed = FALSE;
	FILE* f=fopen(filename,"r");
	if(f!=NULL)
	{
		
		existed = TRUE;
		fclose(f);
	}
	return existed;
 } 
 
int writeFile (char* filename)
{
	char c;
	int CTRL_Z=-1;
	if(exist(filename)==TRUE)
	{
		printf("The file %s existed, overwrite it Y/N?");
		if (toupper(getchar())=='N') return FALSE;
	}
	
}
