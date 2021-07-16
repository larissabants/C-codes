#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, aux;
	printf("valor de a:");
	scanf("%f", &a);
	printf("valor de b:");
	scanf("%f", &b);
	aux=a;
	a=b;
	b=aux;
	printf("novo valor de a: %f", a);
	printf("novo valor de b: %f", b);
	
	getch();
	return 0;
}
