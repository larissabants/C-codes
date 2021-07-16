#include<stdio.h>
#include<conio.h>

int main()
{
	float area, comp, raio;
	printf("raio da circunferencia:");
	scanf("%f", &raio);
	area=3.1416*(raio*raio);
	printf("a area do circulo eh: %f", area);
	comp=2*3.1416*raio;
	printf("o comprimento do circulo eh: %f", comp);
	
	getch();
	return 0;
}
