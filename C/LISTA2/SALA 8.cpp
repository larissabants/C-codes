#include<stdio.h>
#include<conio.h>

int main()
{
	int n1, n2, n3, n4;
	printf("digite quatro numeros inteiros:");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	if (((n1%2==0) && (n1%3==0)) || ((n2%2==0)&& (n3%2==0)) || ((n3%3==0) && (n4%2==0)) || ((n4%3==0) && (n4%3==0))){
		
		if ((n1%2==0) && (n1%3==0))
	printf("numero divisivel por 2 e 3: %d", n1); 
    
    else if ((n2%2==0) && (n2%3==0))
	printf("numero divisivel por 2 e 3: %d", n2);

	else if ((n3%2==0) && (n3%3==0))
	printf("numero divisivel por 2 e 3: %d", n3);
	
	else if ((n4%2==0) && (n4%3==0))
	printf("numero divisivel por 2 e 3: %d", n4);
}
    else 
    printf("nao foi digitado nenhum numero divisivel por 2 e 3");
	
	
    
    getch();
    return 0;
    
}
