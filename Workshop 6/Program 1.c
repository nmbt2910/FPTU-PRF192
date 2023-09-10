#include <stdio.h>
#include <stdlib.h>

int checkISBN(int n) 
{
	int N[10];
	int C[9];
	int T = 0;
	int i, j;
	for (i = 9; i >= 0; i--)
	{
		N[i] = n % 10;
		n = n / 10;
	}
	for (i = 0; i < 9; i++)
		for (j = i; j < i+1; j++)
		{
			C[j] = N[i]*(10-i);
			T += C[j];
		}
	T += N[9];
	if ((T % 11) == 0)
		printf("Ma ISBN hop le.\n");
	else
		printf("Ma ISBN khong hop le.\n");
}

int main() {
	int n, check;
	check = 1;
	printf("Phan mem kiem tra ma ISBN\n==============\n");
	while (check == 1) {
		do 
		{
			printf("Nhap ma ISBN (nhap 0 de thoat phan mem): ");
			scanf("%d", &n);
			if (n < 0)
				printf("Sai dinh dang, vui long nhap lai\n");
		}
		while (n < 0);
		if (n != 0)
			checkISBN(n);
		else check = 0;
	}
	printf("Tam biet!");
	return 0;
}
