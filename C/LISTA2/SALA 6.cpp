#include<stdio.h>
#include<conio.h>
#include<math.h>
//pow(var, x) - pot
//sqrt(var) - raiz

int main()
{
	float a, b, c, x1, x2, delta;
	printf("equacao do 2 grau:");
	printf("digite o coeficiente a, b, c:", a, b, c);
	scanf("%f %f %f", &a, &b, &c);
    if (a!=0){ 
    delta=pow(b,2)-(4*a*c);
    if(delta<0) 
	printf("a equacao nao tem solucao");
    else if (delta=0){
    x1=((-b)/2*a);
    x2=x1;
    printf("a equacao tem duas raizes diferentes:", x1, x2);
	} else
	{x1=(-b+sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    printf("a equacao tem duas raizes diferentes:", x1, x2);
	}
    }  else printf("nao eh uma equacao do segundo grau");
    
	getch();
    return 0;
    
}
    
