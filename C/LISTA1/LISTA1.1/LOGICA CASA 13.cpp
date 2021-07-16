#include<stdio.h>
#include<conio.h>

int main()
{
	float s, tempo, s0, v0, a;
	s0=2.0;
	v0=2.0;
	a=10.0;
	printf("tempo(segundos):");
	scanf("%f", &tempo);
	s=(s0+v0)*tempo+((1/2)*a*(tempo*tempo));
	printf("o valor do movimento uniforme variavel eh: %f", s);
	
	getch();
	return 0;
	
}
