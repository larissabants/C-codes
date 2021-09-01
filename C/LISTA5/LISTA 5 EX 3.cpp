#include<stdio.h>
#include<conio.h>

int main()
{
	int a[15], b[15], i, j, x, f, acha=0, pesq;
	for(i=0; i<=14; ++i){
	printf("digite os numeros: \n");
	scanf("%d", &a[i]);
	b[i]=1;
	for(f=1; f<=a[i]; ++f)
	b[i]=b[i]*f;}
	for(i=0; i<=13; ++i)
	{for(j=i+1; j<=14; ++j)
	{if(b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	b[j]=x;}}}
	for(i=0; i<=14; ++i){
	printf("%d \n", b[i]);}
	
	
	
	
	getch();
	return 0;

	
	
	
	
}
