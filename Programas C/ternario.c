#include <stdio.h>

main()
{
	char EST_Civil;

	printf("Insira o Estado Civil:\n");
	EST_Civil = getchar();
	
	switch(EST_Civil)
	{
		case 'S': printf("Solteiro"); break;
		case 'C': printf("Casado"); break;
		case 'D': printf("Divorciado"); break;
		default : printf("Estado invalido"); break;
	}

}