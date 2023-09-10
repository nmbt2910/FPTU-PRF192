#include <stdio.h>


	int n=2;
	double x=2;
	char c='F';
	int main()
	{ 
		int m=4;
		short s=3;
		long L=6;
		float y=5;
		printf("Code of main:%u\n", &main);
		printf("Variable n: add:%u, value: %d, memory size:%d\n", &n, n, sizeof(n));
		printf("Variable x: add:%u, value: %lf, memory size:%d\n", &x, x, sizeof(x));
		printf("Variable c: add:%u, value: %c, memory size:%d\n", &c, c, sizeof(c));
		printf("Variable m: add:%u, value: %d, memory size:%d\n", &m, m, sizeof(m));
		printf("Variable s: add:%u, value: %hd, memory size:%d\n", &s, s, sizeof(s));
		printf("Variable L: add:%u, value: %ld, memory size:%d\n", &L, L, sizeof(L));
		printf("Variable y: add:%u, value: %f, memory size:%d\n", &y, y, sizeof(y));
		
			getchar();
			return 666;
	} 
