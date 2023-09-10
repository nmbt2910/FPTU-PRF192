#include <stdio.h>

int main()
{
	char ch;
	int nVowels = 0, nConsonants = 0, nOthers = 0;
	do
	{
		scanf("%c",&ch);
		ch = toupper(ch);
		if (ch>='A' && ch<='Z')
	{
		switch (ch)
		{
			case'A':
			case'E':
			case'I':
			case'O':
			case'U':
				nVowels++;
				break;
			default:
				nConsonants++;
		}
	} else if (ch!=10)
	nOthers++;
	}
	while (ch!='\n');
	printf("Number of Vowels: %d\n", nVowels);
	printf("Number of Consonants:%d\n", nConsonants);
	printf("Number of Others: %d\n", nOthers);
}
