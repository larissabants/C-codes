#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, c;
	printf("3 valores para os lados de um triangulo");
	scanf("%f %f %f", &a, &b, &c);
	
	if ((a<b+c)&&(b<a+c)&&(c<a+b)){
		if ((a==b) && (b==c))
		printf("estes valores formam um triangulo equilatero");
	}
		else
	{if ((a==b)||(a==c)||(b==c))
	printf("estes valores formam um triangulo isoceles");
	else
	printf("estes vaçlores formam um triangulo escaleno");}
	
	getch();
	return 0;
	
}
