#include <stdio.h>

int main()
{
int a,b, c;
a=3;
b=6;
c= ~(++a<<2+b&a?4:1)^8;
printf("%x\n",c);
printf("%d\n",a);
return 0;
}
