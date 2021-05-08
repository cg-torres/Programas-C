#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define DIM 20
#define SEP_NOME ", "
/*
int main()
{

    char nome[DIM+1], apelido[DIM+1], completo[2*DIM+1];
    while(1){

        printf("Nome: "); gets(nome);
        if(!strcmp(nome,"SAIR"))
            break;
        printf("Apelido: "); gets(apelido);

        strcpy(completo,apelido);
        strcat(completo,SEP_NOME);
        strcat(completo, nome);
        puts(completo);

    }

}
*/
char *strsetup(char *s, char ch)
{
    int i;
    for(i=0; s[i]!='\0'; i++)
        s[i]=ch;

    return s;
}

char *strupr(char *s)
{
    int i;
    for(i=0; s[i]!='\0'; i++)
        s[i]=toupper(s[i]);

    return s;
}

int main()
{
char nome[DIM];
gets(nome);
strupr(nome);
strsetup(nome, 'A');
puts(nome);
}

