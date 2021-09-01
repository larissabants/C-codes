#include<stdio.h>
#include<conio.h>

int main()
{
	int a[4], b[4], c[4][2], i, j;
	for(i=0; i<=3; i++){
	printf("digite os numeros da matriz a: \n");
	scanf("%d", &a[i]);}
	for(i=0; i<=3; i++){
	printf("digite os numeros da matriz b: \n");
	scanf("%d", &b[i]);}
		for(i=0; i<=3; i++)
	for(j=0; j<=3; ++j){
	c[i][0]=a[i]*2;
	c[i][1]=b[i]-5;
	}
	for(i=0; i<=3; i++)
	for(j=0; j<=1; j++){
	printf("matriz c: %d \n", c[i][j]);}
	
	getch();
	return 0;
	
	
}
