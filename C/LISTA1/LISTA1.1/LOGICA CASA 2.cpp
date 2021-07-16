#include<stdio.h>
#include<conio.h>

int main()
{
	float dolar, rl;
	printf("o valor em dolares para conversao:");
	scanf("%f", &dolar);
	rl=dolar*2.40;
	printf("o valor em reais eh: %f", rl);
	
	getch();
	return 0;
}
