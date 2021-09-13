#include<stdio.h>
#include<conio.h>
#include<string.h>

int menu=0;
struct registro{
char nome[60], end[60], email[60], tel[9];};
struct registro x[5];
int i, j;
int cadastro();
int pesquisa();
int ordenacao();
int alteracao();
int deletar();


int main()
{

	while(menu!=6){
		
		{printf("digite 1: cadastro \n 2: pesquisa \n 3: ordenacao \n 4: alteracao \n 5: deletar \n 6: sair \n");
		scanf("%d", &menu);}

	switch(menu){
	case 1: cadastro(); break;
	case 2: pesquisa(); break;
	case 3: ordenacao(); break;
	case 4: alteracao(); break;
	case 5: deletar(); break;}}}

	int cadastro(){
	for(i=0; i<=4; ++i){
	printf("nome:");
	fflush(stdin);
	fgets(x[i].nome, 60, stdin);
	printf("telefone:");
	fflush(stdin);
	fgets(x[i].tel, 9, stdin);
	printf("endreco:");
	fflush(stdin);
	fgets(x[i].end, 60, stdin);
	printf("email:");
	fflush(stdin);
	fgets(x[i].email, 60, stdin);}}
	
	int pesquisa(){
	char nomee[60];
	printf("\n digite o nome a ser pesquisado: \n");
	fflush(stdin);
		fgets(nomee, 60, stdin);
		for(i=0; i<=4; ++i){
			
			if(strcmp(nomee,x[i].nome) ==0) break;}
			printf("\n nome %s encontrado na posicao %d \n ", nomee, i);
			}
			
		int ordenacao(){
		struct registro aux;
		for(i=0; i<=3; ++i)
		for(j=i+1; j<=4; ++j)
		if(strcmp(x[i].nome,x[j].nome)>0)
		{aux=x[i];
		x[i]=x[j];
		x[j]=aux;}
		for(i=0; i<=4; ++i)
		printf("%s", x[i].nome);}
		
		int alteracao(){
		char nomee[60];
		printf("\n digite o nome para alteirar: \n");
		fflush(stdin);
		fgets(nomee, 60, stdin);
		for(i=0; i<=4; ++i){
			
			if(strcmp(nomee, x[i].nome) ==0)
			break;}
			
	printf("nome:");
	fflush(stdin);
	fgets(x[i].nome, 60, stdin);
	printf("telefone:");
	fflush(stdin);
	fgets(x[i].tel, 9, stdin);
	printf("endreco:");
	fflush(stdin);
	fgets(x[i].end, 60, stdin);
	printf("email:");
	fflush(stdin);
	fgets(x[i].email, 60, stdin);}
		
		int deletar(){
		char nomee[60];
		printf("digite o nome a ser removido: \n");
		fflush(stdin);
		fgets(nomee, 60, stdin);
		for(i=0; i<=5; ++i){
			if(strcmp(nomee, x[i].nome)==0) 
			break;}
			printf("\n tecle enter 4x para remover");
			fgets(x[i].nome, 60, stdin);
			fgets(x[i].end, 60, stdin);
			fgets(x[i].email, 60, stdin);
			fgets(x[i].tel, 9, stdin);
			printf("\n voce deletou o registro \n");
			getch();}
		
