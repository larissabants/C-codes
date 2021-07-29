#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a, b, c;
	printf("digite um numero:");
	scanf("%f", &a);
	printf("digite o expoente:");
	scanf("%f", &b);
	if(c=pow(a,b))
	printf("o resultado eh: %2.f", c);
	
	getch();
	return 0;
	
}
