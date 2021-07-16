#include<stdio.h>
#include<conio.h>

int main()
{
	float despaco, dtempo, vm, sfinal, sinicial, tfinal, tinicial;
	printf("espaco inicial do corpo:");
	scanf("%f", &sinicial);
	printf("espaco finfinal do corpo:");
	scanf("%f", &sfinal);
	printf("tempo inicial do corpo:");
	scanf("%f", &tinicial);
	printf("tempo final do corpo:");
	scanf("%f", &tfinal);
	dtempo=tfinal-tinicial;
	despaco=sfinal-sinicial;
	vm=despaco/dtempo;
	printf("a velocidade media eh: %f", vm);
	
	getch();
	return 0;
}
