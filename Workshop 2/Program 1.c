#include <stdio.h>

int main()
{
	double num1, num2;
	char op;
	double result;
	printf("Enter 1st number, op, 2nd number: ");
	scanf("%lf%c%lf",&num1, &op, &num2);
	switch(op)
	{
		case'+':
			result = num1 + num2;
			printf("%lf",result);
			break;
		case'-':
			result = num1 - num2;
			printf("%lf",result);
			break;
		case'*':
			result = num1 * num2;
			printf("%lf",result);
			break;
		case'/':
			result = num1 / num2;
			printf("%lf",result);
			break;
		default:
			printf("OP is not supported.");
	}
	getchar();
	return 9;
}
