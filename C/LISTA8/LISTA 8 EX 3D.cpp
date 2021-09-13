#include<stdio.h>
#include<conio.h>
#include<math.h>

int potencia(int *base, int *exp)
{
	int result=pow(*base,*exp);
	printf("resultado: %d", result);
	return(0);}
}

int main()
{
	int *pbase, base, *pexp, exp, result;
	printf("digite o numero da base:");
	scanf("%d", &base);
	printf("digite o numero do expoente");
	scanf("%d", &exp);
	pbase=base;
	pexp=exp;
	potencia(base, exp, result);
}
