#include<stdio.h>
#include<conio.h>

int main()
{
	float prestacaoatraso, prestacaovalor, taxa, tempo;
	printf("o valor da prestacao:");
	scanf("%f", &prestacaovalor);
	printf("o valor da taxa de juro:");
	scanf("%f", &taxa);
	printf("tempo em atraso:");
	scanf("%f", &tempo);
	prestacaoatraso=prestacaovalor+(prestacaovalor*(taxa/100)*tempo);
	printf("o valor da prestacao eh: %f", prestacaoatraso);
	
	getch();
	return 0;
	
}
