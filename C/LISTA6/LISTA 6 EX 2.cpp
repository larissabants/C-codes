#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7], b[7], c[7][2], i, j;
	for(i=0; i<=6; i++){
	printf("digite os numeros da matriz a: \n");
	scanf("%d", &a[i]);}
	for(i=0; i<=6; i++)
		for(i=0; i<=6; i++){
	printf("digite os numeros da matriz b: \n");
	scanf("%d", &b[i]);}
	for(i=0; i<=6; i++)
	for(j=0; j<=6; ++j){
	c[i][0]=a[i];
	c[i][1]=b[i];
	}

	for(i=0; i<=6; i++)
	for(j=0; j<=1; j++){
	printf("matriz c: %d \n", c[i][j]);}
	
	getch();
	return 0;
	
	
}
