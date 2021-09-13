#include<stdio.h>
#include<conio.h>

int soma(int a);

int main()
{
	int a;
	printf("digite o numero desejado: \n");
	scanf("%d", &a);
	soma(a);
	}
	
	int soma(int a)
	{
		int x, y=0;
		{for(x=1; x<=a; ++x)
		y=x+y;}
		printf("resultado: %d \n", y);
		getch();
	}
