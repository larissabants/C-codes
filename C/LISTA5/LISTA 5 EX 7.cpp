#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[20], i, j, x, acha=0, pesq;
	for(i=0; i<=19; ++i){
	printf("digite os numeros de a: \n");
	scanf("%d", &a[i]);
		b[i]=a[i]+2;}
	for(i=0; i<=19; ++i)
	{for(j=i+1; j<=19; ++j)
	{if(b[i]>b[j])
	{x=b[i];
	b[i]=b[j];
	b[j]=x;}}}
	for(i=0; i<=19; ++i){
	printf("%d \n", b[i]);}
	printf("pesquise um numero:");
	scanf("%d", &pesq );
	for(i=0; i<=19; i++)
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
	
