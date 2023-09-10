#include <stdio.h>

void isPrime(int n)
{
	int result = 1;
	int i;
	for(i=2;i<=n/2 && result == 1;i++)
	{
		if(n%i==0)
		{
			result = 0;
		}
	}
	printf("\n\n***************************\n");
	if(result == 1)
	{
		printf("%d is a prime\n",n);
	}
	else
	{
		printf("%d is not a prime\n",n);
	}
	printf("***************************\n\n\n");
}

void printMinMax(int n)
{
	int minDigit=10,maxDigit = -1;
	//Make sure that 
	//the first number always 
	//store in minDigit and maxDigit
	int remainder = 0;
	do
	{
		remainder = n%10;
		if(remainder>maxDigit)
		{
			maxDigit = remainder;
		}
		if(remainder< minDigit)
		{
			minDigit = remainder;
		}
		n /= 10;	
	}
	while(n != 0);
	printf("\n\n***************************\n");
	printf("maxDigit:%d,minDigit:%d\n",
	maxDigit,
	minDigit);
	printf("***************************\n\n\n");
}

int menu()
{
	int userChoice;
	printf("Please choose an options:\n1-Check Prime\n2-Print min and max digit\n3-Quit\nYour Choice:");
	fflush(stdin);
	scanf("%d",&userChoice);
	return userChoice;
}

int checkInput()
{
	int rc, value,keepTrying = 1;
	char ch;
	do
	{
		printf("Please input n:");
		fflush(stdin);
		rc = scanf("%d%c",&value,&ch);
		if(rc <=0)
		{
			printf("Input is invalid\n");
		}
		else 
		{
			if(ch !='\n')
			{
				printf("Trailling character must be an Enter\n");
			}
			else if( value <0)
			{
				printf("Input %d must be equal or greater than 0\n",value);
			}
			else
			{
				keepTrying = 0;
			}
		}
	} while(keepTrying == 1);
	return value;
}
int main()
{
	int userChoice;
	int n;
	do
	{
		userChoice = menu();
		switch(userChoice)
		{
			case 1:
			{
				printf("\n\nYou chose option 1\n");
				//isPrime(int n)
				n = checkInput();
				isPrime(n);
				break;
				
			}
			case 2:
			{
				printf("\n\nYou chose option 2\n");
				n = checkInput();
				printMinMax(n);
				break;	
			}
			default:
			{
				printf("\n\nYou chose option 3\n");
				printf("Bye!");
				break;
			}
		}
		
	}while(userChoice>0 && userChoice<4);
}




