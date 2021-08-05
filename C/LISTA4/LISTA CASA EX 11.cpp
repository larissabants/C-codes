#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, tabuada;
	printf("entre com o valor da tabuada:");
	scanf("%d", &a);
	for(b=1; b<=10; ++b)
	{tabuada=b*a;
	printf("%d X %d = %d \n", a, b, tabuada);
	}
	
	getch();
	return 0;
	
}
