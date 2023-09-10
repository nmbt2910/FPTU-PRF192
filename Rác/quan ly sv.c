#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ltrim(char s[])
 {
 	int i=0;
 	while (s[i]=='	') i++;
 	if(i>0) strcpy (&s[0], &s[i]);
 }
void nameString(char s[])
 {
 	ltrim(s);
	strlen(s);
	int L= strlen(s);
	int i;
	for (i=0; i<L; i++)
	if( i==0 || (i>0 && s[i-1]=='	')) s[i] = toupper (s[i]);
 }
 void main()
 {
 	char ho[100], ten[100], chuoi[200];
 	printf("Nhap chuoi 1: ");
 	scanf("%[^\n]", ho);
 	fflush(stdin);
 	printf("\nNhap chuoi 2: ");
 	scanf("%[^\n]", ten);
 	ltrim(ho);ltrim(ten);
	nameString(ho); nameString(ten);
	printf("\nChuoi ghep la: %s %s\n\n",ho,ten);
	scanf("%[^\n]", chuoi);

    int count = 0, i;
	
for (i=0;i<strlen(chuoi);i++)
	{
		if(chuoi[i]==" ")
		count++;
	}
	count +=1;
	printf("Count chu: %d", count);
}
