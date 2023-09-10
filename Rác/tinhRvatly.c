#include <stdio.h>

double equivalent (double r1, double r2, double r3)
{
	//Todo: Z=1/(1/r1+1/r2+1/r3)
	double Z= 1./(1./r1+1./r2+1./r3);
	return Z;
}

int main()
{
	double R1,R2,R3;
	printf("\nInput 3 resistances:");
	scanf("%lf%lf%lf",&R1,&R2,&R3);
	printf("Their euiqvalent:%lf\n",equivalent(R1,R2,R3));
	getchar();
	getchar();
}
