#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[30], b[30], i, j, x, acha=0, pesq;
	for(i=0; i<=29; ++i){
	printf("digite os numeros de a: \n");
	scanf("%d", &a[i]);
		b[i]=pow(a[i],3);}
	for(i=0; i<=29; ++i)
	{for(j=i+1; j<=11; ++j)
	{if(b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	b[j]=x;}}}
	for(i=0; i<=29; ++i){
	printf("%d \n", b[i]);}
	printf("pesquise um numero:");
	scanf("%d", &pesq );
	for(i=0; i<=29; i++)
	{
		if((pesq==b[i]) && (acha==0))
		
		{
	
					
			acha=1;
			break;
			
		}
		
	}
	
	if(acha==1)
	printf("achei: %d na posicao: %d", pesq, i);
	else
	printf("numero nao encontrado");
	
	
	
	
	getch();
	return 0;

	
	
	
	
}
	
