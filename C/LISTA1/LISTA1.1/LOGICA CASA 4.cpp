#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, area, perimetro;
	printf("medida do lado a do retangulo:");
	scanf("%f", &a);
	printf("medida do lado b do retangulo:");
	scanf("%f", &b);
	area=(a*b);
	printf("area total do retangulo: %f", area);
	perimetro=(2*a)+(2*b);
	printf("perimetro do retangulo: %f", perimetro);
	
	getch();
	return 0;
}
