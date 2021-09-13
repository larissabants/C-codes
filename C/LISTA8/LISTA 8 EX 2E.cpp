#include<stdio.h>
#include<conio.h>

int matriza(int x, int a[12]);
int matrizb(int x, int b[12]);
int matrizc(int x, int c[12]);
int i, j, aux;

int main()
{
int a[12], b[12], c[12], i, j, aux;
matriza(12, a);
matrizb(12, b);
matrizc(12, a, b, c);
}

int matriza(int x, int a[12])
{
	for(i=0; i<=11; ++i){
	printf("numeros de a: \n");
		scanf("%d", &a[i]);}
	for(i=0; i<=10; ++i)
	{for(j=i+1; i<=11; ++j)
		{if(a[i]>a[j]){
			aux=a[i];
			a[i]=a[j];
			a[j]=aux;
	}}}}
int matrizb(int x, int b[12])
{
	for(i=0; i<=11; ++i){
	printf("numeros de b: \n");
		scanf("%d", &b[i]);}
	for(i=0; i<=10; ++i)
	for(j=i+1; j<=11; ++j){
		{if(b[i]>b[j]){
			aux=b[i];
			b[i]=b[j];
			b[j]=aux;
	}}}}

int matrizc(int x, int a[12], int b[12], int c[12])
{
	printf("os valores de c sao: \n");
	for(i=0; i<=11; ++i){
		c[i]=a[i]+b[i];}
	for(i=0; i<=10; ++i)
	{for(j=i+1; j=11; ++j)
	{if(c[i]>c[j])
		{aux=c[i];
		c[i]=c[j];
		c[j]=aux;}}}
		for(i=0; i<=11; ++i){
		printf("%d \n", c[i]);}
	getch();}
