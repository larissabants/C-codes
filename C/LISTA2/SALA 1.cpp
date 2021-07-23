#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, media;
	printf("digite as 3 notas:");
	scanf("%f, %f %f", &n1, &n2, &n3);
	media=((n1+n2+n3)/3);
	if (media>=6) {
	printf("aluno aprovado com media: %f", media);}
	else
	printf("aluno reprovado com media: %f", media);
	
	getch();
	return 0;
	
}
