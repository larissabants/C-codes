#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], b[12], c[24], i, j, x, f, acha=0, pesq;
	for(i=0; i<=11; ++i){
	printf("digite os numeros a: \n");
	scanf("%d", &a[i]);}
	for(i=0; i<=10; ++i)
	{for(j=i+1; j<=11; ++j)
	{if(a[i]>a[j])
	{x=a[i];
	a[i]=a[j];
	a[j]=x;}}}
	
	for(i=0; i<=11; ++i){
	printf("digite os numeros b: \n");
	scanf("%d", &b[i]);}
	for(i=0; i<=10; ++i)
	{for(j=i+1; j<=11; ++j)
	{if(b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	b[j]=x;}}}
	
	for(i=0; i<=11; ++i)
	c[i]=a[i]+b[i];
	for(i=0; i<=10; ++i)
	{for(j=i+1; j<=11; ++j)
	{if(c[i]>c[j])
	{x=c[i];
	c[i]=c[j];
	c[j]=x;}}}
	for(i=0; i<=11; ++i)
{printf("%d \n", c[i]);}


	
	
	getch();
	return 0;
	
}

	
	
	
	

