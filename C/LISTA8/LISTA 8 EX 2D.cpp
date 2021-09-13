#include<stdio.h>
#include<conio.h>
#include<math.h>

int potencia(int base, int exp)
{
	int result=pow(base,exp);
	printf("resultado: %d", result);
}
int main()
{
	int base, exp;
	printf("digite o numero da base:");
	scanf("%d", &base);
	printf("digite o numero do expoente");
	scanf("%d", &exp);
	potencia(base, exp);
}

