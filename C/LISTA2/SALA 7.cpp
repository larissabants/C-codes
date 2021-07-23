#include<stdio.h>
#include<conio.h>

int main()
{
	int n, x;
	printf("o valor de n eh:");
	scanf("%d", &n);
	if (n<0) 
	x=(n*(-1));
	else 
	x=n;
	printf("o valor do modulo deste numero eh: %d", x);
	
	getch();
	return 0;
}
