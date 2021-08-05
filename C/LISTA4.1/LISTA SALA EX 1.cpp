#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], i;
	for (i=0; i<5; ++i)
	{printf("entre com os numeros: \n");
	scanf("%d", &a[i]);
	}
	for (i=0; i<5; ++i)
	{b[i]=a[i]*3;
	printf("a:%d  b:%d", a[i], b[i]);}
	
	getch();
	return 0;
	
}

