#include<stdio.h>
#include<conio.h>

int main()
{
 	float a=0,b=0;
	for(a=1; a>=0; a=a+b)
	{b=a-b;
    printf("%2.f \n", b);
	}
    
	getch();
	return 0;
  
}
