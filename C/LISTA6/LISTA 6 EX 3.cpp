#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[10], b[10][3], i, c, j, f;
	printf("digite os numeros da matriz A:");
	for(i=0; i<10; ++i){
	scanf("%d", &a[i]);
	}
	for(i=0; i<=10; ++i)
	for(j=0; j<=2; ++j){
		if(j<3){
			b[i][j]=pow(a[i],2);
		}
		if(j<2){

		f=1;
		c=a[i];
		while(c>1)
		{
			f*=c;
			c--;
		}
		b[i][j]=f;}
		if(j<1){
		b[i][j]=a[i]+5;
	}
}
		
	for(i=0; i<=9; ++i)
	for(j=0; j<=2; ++j){
	printf("\n %d \n", b[i][j]);}
	
	getch();
	return 0;
	
}
