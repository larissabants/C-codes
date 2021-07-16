#include<stdio.h>
#include<conio.h>

int main()
{
	float r, v, h;
	printf("entre com o raio:");
	scanf("%f", &r);
    printf("entre com a altura:");
	scanf("%f", &h);
	v= r*r*3.14159*h;
	printf("o valor do volume eh: %f", v);
	
	getch();
	return 0;
}
