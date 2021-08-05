#include<stdio.h>
#include<conio.h>

int main()
{
	int num, numchave;
	printf("digite um numero inteiro:");
	scanf("%d", &num);
	numchave=20;
	if ((num>=0) && (num<=100))
	num=(num-numchave);
	if (num<0)
{
		num=(num*(-1));
	printf("a distancia do numero digitado e o numero chave eh: %d", num);
}
	else
	printf("numero digitado incorreto");
	
	getch();
	return 0;
	
}
	
	
	
