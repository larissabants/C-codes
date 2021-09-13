#include<stdio.h>
#include<conio.h>
#include<math.h>

int soma(int *a){
	int soma=0;
	for(int i=0; i<=*a; ++i)
	soma+=i;
	printf("resultado: %d", soma);
}

int main()
{
	int a, *pa;
	printf("digite o numero desejado: \n");
	scanf("%d", &a);
	pa=&a;
	soma(pa);
	
}
