#include<stdio.h>
#include<conio.h>

int main()
{
	float nr_coelhos, custo;
	printf("digite a quantidade de coelhos:");
	scanf("%f", &nr_coelhos);
	custo=(nr_coelhos*0.70)/18+10;
	printf("com %f", nr_coelhos);
	printf("o custo sera de: %f", custo);
	
	getch();
	return 0;
}
