#include<stdio.h>
#include<conio.h>

int main()
{
	int a[40], i, j, x, acha=0, pesq;
	for(i=0; i<=39; ++i){
	printf("digite as notas: \n");
	scanf("%d", &a[i]);}
	for(i=0; i<=39; ++i)
	{for(j=i+1; j<=39; ++j)
	{if(a[i]>a[j])
	{x=a[i];
	a[i]=a[j];
	a[j]=x;}}}
	for(i=0; i<=39; ++i){
	printf("%d \n", a[i]);}
	printf("pesquise uma nota:");
	scanf("%d", &pesq );
	for(i=0; i<=39; i++)
	{
		if((pesq==a[i]) && (acha==0))
		
		{
	
					
			acha=1;
			break;
			
		}
		
	}
	
	if(acha==1)
	printf("achei a nota: %d na posicao: %d", pesq, i);
	else
	printf("nota nao encontrada");
	
	
	
	
	getch();
	return 0;

	
	
	
	
}
