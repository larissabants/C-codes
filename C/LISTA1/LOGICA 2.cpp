#include<stdio.h>
#include<conio.h>

int main()
{
	float c, f;
	printf("entre com a temperatura:");
	fflush(stdin);
	scanf("%f", &f);
	c=(((f-32)*5)/9);
	printf("o valor da temperatura em celsius eh: %f" , c );
	
	getch();
	return 0;
}

