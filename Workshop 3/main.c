#include <stdio.h>
//[3,15]

double getDouble()
{
	int rc, keepTrying=1;
	double n;
	char c;
	do
	{
		printf("Please input n: ");
		rc= scanf("%lf%c",&n,&c);
		
		switch(rc)
		{
			case -1:
				{
					//enter Ctrl+Z
					printf("Enter Ctrl+Z\n\n");
					fflush(stdin);
					break;
				}
				case 0:
				{
					//invalid input
				printf("Invalid input\n\n");
				fflush(stdin);
				break;	
				}
				default:
					{
						if(c != '\n')
						{
							//Invalid Trailing character 3.14 + Enter
							printf("Trailing character must be an Enter\n\n");
							fflush(stdin);
						}
						else if(n<3.||n>15.)
						{
							printf("%lf is out of rangee [3;15]\n\n", n);
							fflush(stdin);
						}
						else
						{
							//valid input
							keepTrying = 0;
						}
					}
				break;
		}
	 } while (keepTrying==1);
	 return n;
 } 
 int main()
 {
	double n = getDouble();
	printf("You inputted %4.4lf\n");
	system("Pause");
	
	
 }
