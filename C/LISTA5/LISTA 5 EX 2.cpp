#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8], b[8], i, j, x, c, acha=0, pesq;
	for(i=0; i<=7; ++i){
	printf("digite os numeros: \n");
	scanf("%d", &a[i]);
	c=a[i]*5;
	b[i]=c;}
	for(i=0; i<=7; ++i)
	{for(j=i+1; j<=7; ++j)
	{if(b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	b[j]=x;}}}
	for(i=0; i<=7; ++i){
	printf("%d \n", b[i]);}
	printf("pesquise um numero:");
	scanf("%d", &pesq );
	for(i=0; i<=7; i++)
	{
		if((pesq==b[i]) && (acha==0))
		
		{
	
					
			acha=1;
			break;
			
		}
		
	}
	
	if(acha==1)
	printf("achei %d na posicao %d", pesq, i);
	else
	printf("numero nao encontrado");
	
	
	
	
	getch();
	return 0;

	
	
	
	
}
