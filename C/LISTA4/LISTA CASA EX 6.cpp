#include<stdio.h>
#include<conio.h>

int main()
{
	int a=22, b;
	for (b=20; b>=1; b--)
	if (b%2!=0)
	printf("impar %d \n", b);
	else
	{printf("par %d \n", a-=2);
	}
	
	getch();
	return 0;
	
}
