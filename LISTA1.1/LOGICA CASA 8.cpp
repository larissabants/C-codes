#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, n4, media;
	printf("nota do primeiro bimestre:");
	scanf("%f", &n1);
	printf("nota do segundo bimestre:");
	scanf("%f", &n2);
	printf("nota do terceiro bimestre:");
	scanf("%f", &n3);
	printf("nota do quarto bimestre:");
	scanf("%f", &n4);
	media=(n1+n2+n3+n4)/4;
	printf("a media final eh: %f", media);
	
	getch();
	return 0;
}
