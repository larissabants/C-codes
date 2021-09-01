#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i, j, x, f, acha=0, pesq;
	for(i=0; i<=19; ++i){
	printf("digite os numeros a: \n");
	scanf("%d", &a[i]);}
		for(i=0; i<=29; ++i){
	printf("digite os numeros b: \n");
	scanf("%d", &b[i]);}
	
	for(i=0; i<=49; i++)
	{if (i<=19)
	c[i]=a[i];
	else
	c[i]=b[i-19];}
	
	for(i=0; i<=48; ++i)
	{for(j=i+1; j<=49; ++j)
	{if(c[i]<c[j])
	{x=c[i];
	c[i]=c[j];
	c[j]=x;}}}
	for(i=0; i<=49; ++i)
{printf("%d \n", c[i]);}


	
	
	getch();
	return 0;
	
}
