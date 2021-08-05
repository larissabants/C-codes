#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10], b[10], i, j;
	j=9;
	for(i=0; i<10; ++i) {
	printf("entre com os valores: \n");
	scanf("%d", &a[i]);}
	for(i=0; i<10; ++i){
	b[i]=a[j]; --j;
	printf(" b: %d", b[i] );}
	
	getch();
	return 0;
	
	
}
