#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, c;
	printf("digite tres numero:");
	scanf("%f %f %f", &a, &b, &c);
	if ((a<b) && (a<c) && (b<c))
	printf ("os valores em ordem crecente sao: %f, %f, %f", a, b, c);
	else
	{if ((a<b) && (a<c) && (c<b))
	printf("os valores em ordem crescente sao: %f, %f, %f", a, c, b );
		el
		{if ((b<a) && (b<c) && (a<c))
		printf("os valores en ordem crescente sao: %f, %f, %f", b, a, c);
			else
			{if ((b<a) && (b<c) && (c<a))
			printf("os valores em ordem crescente sao: %f, %f, %f", b, c, a);
				else
				{if ((c<a) && (c<b) && (a<b))
				printf("os valores em ordem crescente sao: %f, %f, %f", c, a, b);
					else
					printf("os valores em ordem crescente sao: %f, %f, %f", c, a, b);
				}
			}
		}
	}
	
	getch();
	return 0;
	
}
