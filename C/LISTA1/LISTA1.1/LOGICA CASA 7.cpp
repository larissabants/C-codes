#include<stdio.h>
#include<conio.h>

int main()
{
	float area, volume, raio;
	printf("digite o raio da esfera:");
	scanf("%f", &raio);
	volume=(4/3)*3.1416*(raio*raio*raio);
	area=(4*3.1416*raio*raio);
	printf("o volume da esfera eh: %f", &volume);
	printf("a area da esfera eh: %f", &area);
	
	getch();
	return 0;
}
