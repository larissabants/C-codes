#include<stdio.h>
#include<conio.h>
#include<string.h>

int menu=0;
struct alunos{
char nome[60];
float nota1, nota2, media;};
struct alunos x[20];
int i, j;

int cadastro();
int ordenacao();
int correcao();
int pesquisa();
int aprovados();
int reprovados();

int main()
{
	while(menu!=7){
		
		printf("\n digite \n 1 cadastro \n 2 ordenacao \n 3 correcao/alteracao \n 4 pesquisa \n 5 listagem de aprovados \n 6 listagem de reprovados \n 7 para sair \n");
		scanf("%d", &menu);
		
		switch(menu){
		case 1: cadastro(); break; 
		case 2: ordenacao(); break;
		case 3: correcao(); break;
		case 4: pesquisa(); break;
		case 5: aprovados(); break;
		case 6: reprovados(); break;}}
		return (0);}
		
	int cadastro(){
	for(i=0; i<=19; ++i){
	printf("nome: \n");
	fflush(stdin);
	fgets(x[i].nome, 60, stdin);
	printf("nota1: \n ");
	scanf("%f", &x[i].nota1);
	printf("nota2: \n");
	scanf("%f", &x[i].nota2);
	x[i].media=(x[i].nota1+x[i].nota2)/2;
	}}
	
	int ordenacao(){
	struct alunos aux;
	for(i=0; i<=18; ++i)
	for(j=i+1; j<=19; ++j)
	if(strcmp(x[i].nome,x[j].nome)>0)
	{aux=x[i];
	x[i]=x[j];
	x[j]=aux;}
	for(i=0; i<=19; ++i)
	printf("%s", x[i].nome);}
	
	int correcao(){
	char nomee[60];
	printf("digite o nome a ser alterado:");
	fflush(stdin);
	fgets(nomee, 60, stdin);
	for(i=0; i<=19; ++i){
	
	if(strcmp(nomee,x[i].nome)==0)
	break;}
	
	printf("nome:");
	fflush(stdin);
	fgets(x[i].nome, 60, stdin);
	printf("nota1:");
	scanf("%f", &x[i].nota1);
	printf("nota2:");
	scanf("%f", &x[i].nota2);
	x[i].media=(x[i].nota1+x[i].nota2)/2;}
	
	int pesquisa(){
	char nomee[60];
	printf("\n digite o nome a ser pesquisado: \n");
	fflush(stdin);
	fgets(nomee, 60, stdin);
	for(i=0; i<=19; ++i){
		
		if(strcmp(nomee, x[i].nome)==0) break;}
		printf("nome %s enscontrado na posicao %d", nomee, i);
		 }
		
	int aprovados(){
	for(i=0; i<=19; ++i)
	{
		if(x[i].media>=6)
	
		printf("aprovados %s", x[i].nome);
	}}
	
	int reprovados(){
	for(i=0; i<=19; ++i)
	{
		if(x[i].media<6)
		printf("reprovados %s", x[i].nome);
	getch();}}
