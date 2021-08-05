#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6], b[6], i, c;
	for (i=0; i<6; ++i)
	{printf("entre com os numeros: \n");
	scanf("%d", &a[i]);
	fflush(stdin);}
	for (i=0; i<6; ++i)
	{
		b[i]=1;
		for(c=a[i]; c>0; --c)
		b[i]=b[i]*c;
		printf("a:%d \n b:%d \n ", a[i], b[i] );
	}
	
	getch();
	return 0;
	
}
	
