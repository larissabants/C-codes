#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	int menu=0;
	struct age{
	char nome[60], end[60];
	int idade, tel;};
	struct age x[5], aux;
	int i, j, opc, idade;
	char nome[60];
	while(menu!=5){
	
	printf("\n digite 1: para cadatro e registro \n 2: pesquisa de registro \n 3: classificacao alfabetica \n 4: alteracao de registro \n 5: sair ");
	scanf("%d", &menu);
	
	switch(menu) 
	{case 1: 
	for(i=0; i<=4; ++i){
	fflush(stdin);
	printf("nome:");
	fgets(x[i].nome, 60, stdin);
	fflush(stdin);
	printf("endereco:");
	fgets(x[i].end, 60, stdin);
	fflush(stdin);
	printf("idade:");
	scanf("%d", &x[i].idade);
	fflush(stdin);
	printf("telefone:");
	scanf("%d", &x[i].tel);}
	break;
	
	case 2: printf("digite a idade:");
	scanf("%d", &idade);
	for(i=0; i<=4; ++i)
	{
		if(idade==x[i].idade)
	printf("a idade %d foi encontrada na posicao %d", idade, i);	
	}
	break;
	
	case 3: for(i=0; i<=3; ++i)
	for(j=i+i; j<=4; ++j)
	if(strcmp (x[i].nome, x[j].nome) >0)
	{aux=x[i];
	x[i]=x[j];
	x[j]=aux;}
	for(i=0; i<=4; ++i)
	printf("%s", x[i].nome);
	break;
	
	case 4: 
	fflush(stdin);
	printf("digite o nome cadastrado para alterar:");
	fflush(stdin);
	fgets(nome,60,stdin);
	
	for(i=0; i<=4; ++i)
	{
	if(strcmp(nome, x[i].nome)==0)
		break;
	}
	
	fflush(stdin);
	printf("digite o nome corrigido\n");
	fflush(stdin);
	printf("nome:");
	fgets(x[i].nome, 60, stdin);
	fflush(stdin);
	printf("endereco:");
	fgets(x[i].end, 60, stdin);
	fflush(stdin);
	printf("idade:");
	scanf("%d", &x[i].idade);
	printf("telefone:");
	scanf("%d", &x[i].tel);       
	break;

	}
}
	
	getch();
	return 0;
	
	}
