#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, result;
	char operacao;
	char opcao, s;
	do {
		printf("digite uma das operacoes seguintes: (+, -, /) ou digite 's' para sair. \n");
		scanf("%c", &operacao);
			printf("digite um numero: \n");
			scanf("%i", &a);
			printf("digite outro numero: \n");
			scanf("%i", &b);
			result=0;
			switch(operacao){
				case '+': printf("o resultado eh: %i \n", result=a+b); break;
				case '-': printf("o resultado eh: %i \n", result=a-b); break;
				case '*': printf("o resultado eh: %i \n", result=a*b); break;
				case '/': printf("o resultado eh: %i \n", result=a/b); break;
				default: printf("erro \n");}
				scanf("%c", &opcao);
				
				if (opcao== s){
			printf("\n fechando a calculadora");
			 
			}
				
			}
			  while (opcao == s);
			 getch();
			 return 0;
			 
	}
