#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	printf("digite um numero inteiro:");
	scanf("%d", &num);
	if (num % 2==0)
	printf("o numero digitado eh par");
	else
	printf("o numero digitado eh impar");
	
	getch();
	return 0;
}
