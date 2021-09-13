#include<stdio.h>
#include<conio.h>

int prestacao(float temp, float *taxa, float *valor, float atraso, float *prest)
{
	prest=*valor+(*valor*(*taxa/100)**temp);
	printf("o valor da prestacao e: %2.f \n", prest);
}

int main()
{
	float *pvalor, *ptemp, temp, *ptaxa, taxa, valor, *patraso, prest;
	float atraso;
	
	printf("valor da prestacao: \n");
	scanf("%f", &valor);
	printf("taxa: \n");
	scanf("%f", &taxa);
	printf("tempo de atraso: \n");
	scanf("%f", &temp);
	
	pvalor= &valor;
	ptaxa= &taxa;
	ptemp= &temp;
	prest(prest, pvalor, ptaxa, ptemp);
	getch();
	return 0;}
