#include<stdio.h>
#include<conio.h>

int main()
{
	
	int mes;
	printf("digite um numeo de 1 a 12 para o mes: \n");
	scanf ("%d", &mes);
	switch(mes){
		case 1: printf("janeiro") ; break;
		case 2:  printf("fevereiro") ; break;
		case 3:  printf("mar�o"); break;
		case 4:  printf("abril"); break;
		case 5:  printf("maio"); break;
		case 6:  printf("junho"); break;
		case 7:   printf("julho"); break;
		case 8:  printf("agosto"); break;
		case 9:  printf("setembro"); break;
		case 10:  printf("outubro"); break;
		case 11:  printf("novembro"); break;
		case 12:  printf("dezembro"); break;
		default: printf("numero invalido"); break;}
		
	getch();
	return 0;
	
	}
