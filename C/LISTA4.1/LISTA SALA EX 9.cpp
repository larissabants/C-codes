#include<stdio.h>
#include<conio.h>

int main()
{
	
	int curso;
	printf("digite um numeo de 1 a 5 para o curso: \n");
	scanf ("%d", &curso);
	switch(curso){
		case 1: printf("engenharia") ; break;
		case 2:  printf("edificacoes") ; break;
		case 3:  printf("sistemas eletricos"); break;
		case 4:  printf("turismo"); break;
		case 5:  printf("analise de sistemas"); break;

	}
	
	getch();
	return 0;
	
	}
