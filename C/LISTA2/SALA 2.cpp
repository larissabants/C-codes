#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, media, notaexame, exame, novamedia;
	printf("digite as 2 notas:");
	scanf("%f %f", &n1, &n2);
	media=(n1+n2)/2;
	if (media>=6)
	printf("aluno aprovado com media: %f",media);	
	else
	{
		printf("digite a nota do exame");
		scanf("%f", &exame);
		novamedia=(exame+media)/2;
	
	if (novamedia>=5)
		printf("aluno aprovado em exame com media: %f", novamedia);
	else
		printf("aluno reprovado com media: %f", novamedia);
}
	getch();
	return 0;
	
}
