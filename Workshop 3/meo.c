#include <stdio.h>
#include <windows.h>

#define maxChoice '3'

char getUserChoice()
{
    char n;
    printf("1-Input u, then sum from 1 to u\n");
    printf("2-Character ASCII\n");
    printf("3-Quit\n");
    printf("Choice [1..3] : ");
    fflush(stdin);
    scanf("%c", &n);
    return n;
}

void function3()
{
    printf("Program exiting.");
}

void function1()
{
	int main()
	{
    int i, u, sum=0;
		{
			printf("Enter upper limit: ");
    		scanf("%d", &u);
			for(i=1; i<=u; i++)
    		{
        		sum += i;
    }
		printf("Sum of first %d natural numbers = %d", u, sum);
		return 0;
		}
	}
}

void function2()
{
    char c1, c2;
    int c;
    printf("Input 2 character (c1'space'c2): ");
    fflush(stdin);
    scanf("%c %c", &c1, &c2);
    if (c1 < c2) c1 ^= c2 ^= c1 ^= c2;
    for (c = c1; c >= c2; c--)
        printf("%c : %3d %3Xh\n", c, c, c);
    printf("\n");
	system("pause");
	system("cls");
}

main()
{
    char userChoice;
    do
    {
        userChoice = getUserChoice();
        switch(userChoice)
        {
            case '1':function1();
			break;
            case '2':function2();
			break;
            case '3':function3();
			break;
            default : printf("Input 1 or 2 or 3 only!\n\n");
        }
    } while (userChoice != maxChoice);
}
