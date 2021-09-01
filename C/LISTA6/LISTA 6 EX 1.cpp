#include<stdio.h>
#include<conio.h>

int main()

{
	int a[5][3], b[5][3], c[5][3], i, j;
	for(i=0;i<=4;i++)
	for(j=0;j<=2;j++){
	printf("Entre com matriz A: \n");
	scanf("%d",&a[i][j]);
	printf("Entre com matriz B: \n");
	scanf("%d",&b[i][j]);
	c[i][j]=a[i][j]+b[i][j];
	
	}
	for(i=0;i<=4;i++)
	for(j=0;j<=2;j++){
	printf("C: %d \n", c[i][j]);
	}
	
	
	getch();
	return 0; 
	
	}

