#include<stdio.h>
#include<conio.h>

int main()
{
	
	int a, b;
	printf("digite um numero menor que 50:");
	scanf("%d", &a);
	for (a<=50; a<250; a=a*3)
	printf("o resutado eh: %d \n", a);
	
	getch();
	return 0;
	
}
