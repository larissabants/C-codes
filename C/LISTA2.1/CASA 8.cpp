#include<stdio.h>
#include<conio.h>

int main()
{
	float SalBr, SalLiq, Hrs, Adic;
	printf("Digite o salario bruto: ");
	scanf("%f", &SalBr);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &Hrs);
	{if (Hrs >160)
	Hrs=(Hrs-160);
	Adic=(SalBr/160)+(Hrs*0.50);
	SalBr=(Adic+SalBr);
	if (SalBr < 800.00){
	SalLiq=SalBr;
	printf("O salario liquido é: %f ", SalLiq);
	}
	else 
		{
		if ((SalBr <=800.00) && (SalBr <=1600.00)) {
		SalLiq=(SalBr - (SalBr*0.13));
		printf("O salario liquido é: %f ", SalLiq);
		}
		else
			{
			SalLiq=(SalBr - (SalBr*0.22));
			printf("O salario liquido é: %f ", SalLiq);
		}	
	}
	}
	
	getch();
	return 0;
}
