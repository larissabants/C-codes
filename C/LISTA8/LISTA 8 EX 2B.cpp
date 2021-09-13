#include<stdio.h>
#include<conio.h>

int matrizA(int x, int a[30]);
int matrizB(int x, int b[30]);
int juncaomatriz(int x, int a[30], int b[30], int y, int c[60]);
int exibicao(int y, int c[60]);
int i;

int main()
{
	int a[30], b[30], c[60], x=30, y=60;
	matrizA(30, a);
	matrizB(30, b);
	juncaomatriz(60, c);}
	
	int matrizA(int x, int a[30]){
		for(i=0; i<x; ++i){
			printf("valores de a: \n");
			scanf("%d", &a[i]);
		}
	}
	int matrizB(int x, int b[30]){
		for(i=0; i<x; ++i){
			printf("%d", &b[i]);
		}
	}
	int juncaomatriz(int x, int a[30], int b[30], int y, int c[60]){
		for(i=0; i<60; ++i){
			if(i<x)
			{c[i]=a[i];}
		else 
		c[i]=b[i-x];}
	}
	int exibicao(int y, int c[60]){
		for(i=0; i<y; ++i){
			printf("c: %d \n", c[i]);
		}
	}
