#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, b, c;
	printf("o valor a:");
	scanf("%f", &a);
	printf("o valor b:");
	scanf("%f", &b);
	c=a;
	a=b;
	b=c;
	printf("o valor de a eh: %a", "o valor de b eh: %b");
	
	getch();
	return 0;
}

