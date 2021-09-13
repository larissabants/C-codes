#include<stdio.h>
#include<conio.h>

 int fibonacci(int a=0, int b=1);
 int aux, i, n;
 
int main()
{
 	int a, b;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("%d\n", b);
	fibonacci(a, b);} 

 	int fibonacci(int a, int b)
 	{
  	for(i = 0; i < n; i++){
    aux=a+b;
    a=b;
    b=aux;
 	
	 printf("%d\n", aux);
  	}
	getch();}
