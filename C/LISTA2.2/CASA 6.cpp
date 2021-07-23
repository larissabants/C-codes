#include<stdio.h>
#include<conio.h>

int main()
{
	float n, nm, re, rs;
	printf("digite a nota");
	scanf("%f", &n);
	nm=n*100;
	re=nm/100;
	if (re>=5){
    n=(n-(re/100)+1);
    printf("arredonda pra cima %f", n);}
    else
    {
    n=(n-re/100);
    printf("arredonda pra baixo %f", n);}
    
    getch();
    return 0;
	}
	
	
