#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[5], i;
	for (i=0; i<5; ++i)
	{printf("entre com os valores de a e b: \n");
	scanf("%d %d", &a[i], &b[i]);}
	for (i=0; i<5; ++i)
	{c[i]=(a[i]-b[i]);
	printf("a:%d b:%d c:%d", a[i], b[i], c[i]);}
	
	getch();
	return 0;
	
}
