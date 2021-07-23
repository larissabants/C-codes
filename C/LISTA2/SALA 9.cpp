#include<stdio.h>
#include<conio.h>

int main()
{
	int n1, n2, n3, n4;
	printf("digite quatro numeros inteiros:");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	if (((n1%4==0) && (n1%5==0)) || ((n2%4==0)&& (n2%5==0)) || ((n3%4==0) && (n3%5==0)) || ((n4%4==0) && (n4%5==0))){
		
		if ((n1%4==0) && (n1%5==0))
	printf("numero divisivel por 4 e 5: %d", n1); 
    
    else if ((n2%4==0) && (n2%5==0))
	printf("numero divisivel por 4 e 5: %d", n2);

	else if ((n3%4==0) && (n3%5==0))
	printf("numero divisivel por 4 e 5: %d", n3);
	
	else if ((n4%4==0) && (n4%5==0))
	printf("numero divisivel por 4 e 5: %d", n4);
}
    else 
    printf("nao foi digitado nenhum numero divisivel por 4 e 5");
	
	
    
    getch();
    return 0;
    
}
