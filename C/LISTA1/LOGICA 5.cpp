#include<stdio.h>
#include<conio.h>

int main()
{
	float numero, quadrado;
	printf("digite um numero inteiro:");
	scanf("%f", &numero);
	quadrado=numero*numero;
	printf("o quadrado desse numero eh: %f", quadrado);
	
    getch();
	return 0;
}
