#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b;
	printf("o valor de a:");
	scanf("%f", &a);
	printf("o valor de b:");
	scanf("%f", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("novo valor de a: %f", a);
	printf("novo valor de b: %f", b);
	
	getch();
	return 0;
	
}
