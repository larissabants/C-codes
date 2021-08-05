#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[8], b[8], i;
	for (i=0; i<8; ++i)
	{printf("entre com um valor: \n");
	scanf("%d", &a[i]);}
	for (i=0; i<8; ++i)
	{b[i]=pow(a[i], 2);
	printf("a:%d b:%d ", a[i], b[i]);}

	getch();
	return 0;
	
}
	



