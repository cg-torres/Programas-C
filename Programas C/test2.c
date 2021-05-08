#include <stdio.h>
#include <conio.h>

int main()
{
/*	char nome[60];
	int num;
	
	printf("Introduza o seu nome: \n");
	scanf("%s",nome);

	printf("Introduza um numero: ");
	scanf("%d",&num);

	for(int i=0; i<num; i++)
	{
	printf("%s %d\n", nome, i+1);
	}

*/

char nome[60];

printf("Insira o seu nome:");
gets(nome);

printf("O teu nome e %s\n", nome);

//getch();

}