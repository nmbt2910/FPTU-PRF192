#include <stdio.h>
		main()
	{
		double num1, num2; 
		double result;
		char op;
		printf("enter an equation (+ - * /): ");
		scanf("%lf%c%lf", &num1, &op,&num2);
		switch (op)
		{
			case '+':
				 	result = num1 + num2;
				 	printf("result: %3lf", result);
				break;
			case '-':
				 	result = num1 - num2;
				 	printf("result: %3lf", result);
				break;
			case '*':
				 	result = num1 * num2;
				 	printf("result: %3lf", result);
				break;
			case '/':
				 	result = num1 / num2;
				 	printf("result: %3lf", result);
				break;
			default:
				printf("operator is not supported");
		}
	}

