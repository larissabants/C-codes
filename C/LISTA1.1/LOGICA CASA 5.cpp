#include<stdio.h>
#include<conio.h>

int main()
{
	float imc, massa, altura;
	printf("digite a massa(kg):");
	scanf("%f", &massa);
	printf("digite a altura:(m):");
	scanf("%f", &altura);
	imc=massa/(altura*altura);
	printf("o imc restante eh: %f", imc);
	
	getch();
	return 0;
}
