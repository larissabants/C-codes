#include<stdio.h>
#include<conio.h> //EX 2 C//

int prestacao(float temp, float taxa, float valor, float atraso, float prest)
{
	prest=valor+(valor*(taxa/100)*temp);
	printf("o valor da prestacao e: %2.f \n", prest);
}

int main()
{
	float temp, taxa, valor, atraso, prest;
	printf("valor da prestacao: \n");
	scanf("%f", &valor);
	printf("tempo de atraso: \n");
	scanf("%f", &temp);
	printf("taxa: \n");
	scanf("%f", &taxa);
	prestacao(temp, taxa, valor, atraso, prest);
	getch();
	return 0;
}
