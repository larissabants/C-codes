#include<stdio.h>
#include<conio.h>

int main()
{
	float v1, v2, d;
	printf("digite dois valores numericos:");
	scanf("%f %f", &v1, &v2);
	if(v1==v2)
	printf("os numeros digitados sao iguais, nao ha diferenca");
	else {
	
		if(v1<v2)
		d=(v2-v1);
	else
{
	d=(v1-v2);
}
	printf("a diferenca entre os numeros eh: %f", d);
}
	getch();
	return 0;
	
}
	
