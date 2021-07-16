#include<stdio.h>
#include<conio.h>

int main()
{
	float dis, t, veloc, litusa;
	printf("entre com o tempo");
	scanf("%f", &t);
	fflush(stdin);
	printf("entre com a velocidade:");
	scanf("&f", &veloc);
	dis=dis/12;
	litusa=dis/12;
	printf("os valores sao: %.2f %.2f %.2f %.2f" , t, veloc, dis, litusa);
	
	getch(); 
	return 0;
}

