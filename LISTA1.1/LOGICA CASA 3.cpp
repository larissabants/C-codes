#include<stdio.h>
#include<conio.h>

int main()
{
	float ap, lp, aa, la, r1, r2;
	printf("largura do azulejo(cm):");
	scanf("%f", &la);
	printf("altura do azulejo(cm):");
	scanf("%f", &aa);
	printf("largura da parede(m):");
	scanf("%f", &lp);
	printf("altura da parede(m)");
	scanf("%f", &ap);
	la=la/100;
	aa=aa/100;
	r1=la*aa; 
	r2=lp*ap;
	r2=r2/r1;
	printf("a quantidade de azulejos necessarias eh: %f", r1);
	
	getch();
	return 0; 
}
