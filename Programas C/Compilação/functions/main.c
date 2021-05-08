#include <stdio.h>
#include <stdlib.h>

#define DIM 3

int main(){

int win=0;
int i, j, linha, coluna, count=1;
char Galo[DIM][DIM] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

while(win==0)
{
    for(i=0; i<DIM; i++)
    {
        for(j=0; j<DIM; j++)
        {
        printf("%c %c", Galo[i][j], j==DIM-1?' ':'|');
        }
    if(i!=DIM-1) printf("\n-------\n");
    }

    if(count%2==1)
        printf("\nJogador 1(X):\n");
    else
        printf("\nJogador 2(O):\n");


    printf("\nInsira a linha:\n");
    scanf("%d",&linha);
    printf("Insira a coluna:\n");
    scanf("%d",&coluna);

    if(Galo[linha-1][coluna-1]==' '){
        if(count%2==1)
            Galo[linha-1][coluna-1]='X';
        else
            Galo[linha-1][coluna-1]='O';

        count++;
    }
    else
        printf("Posicao ja ocupada\n");

    if((Galo[0][0]=='X' && Galo[0][1]=='X' && Galo[0][2]=='X') || //primeira linha
       (Galo[1][0]=='X' && Galo[1][1]=='X' && Galo[1][2]=='X') || //segunda linha
       (Galo[2][0]=='X' && Galo[2][1]=='X' && Galo[2][2]=='X') || //terceira linha
       (Galo[0][0]=='X' && Galo[1][0]=='X' && Galo[2][0]=='X') || //primeira coluna
       (Galo[0][1]=='X' && Galo[1][1]=='X' && Galo[2][1]=='X') || //segunda coluna
       (Galo[0][2]=='X' && Galo[1][2]=='X' && Galo[2][2]=='X') || //terceita coluna
       (Galo[0][0]=='X' && Galo[1][1]=='X' && Galo[2][2]=='X') || //primeira cruz
       (Galo[0][2]=='X' && Galo[1][1]=='X' && Galo[2][0]=='X') //segunda cruz
       ){
        win=1;
       }
    if((Galo[0][0]=='O' && Galo[0][1]=='O' && Galo[0][2]=='O') || //primeira linha
       (Galo[1][0]=='O' && Galo[1][1]=='O' && Galo[1][2]=='O') || //segunda linha
       (Galo[2][0]=='O' && Galo[2][1]=='O' && Galo[2][2]=='O') || //terceira linha
       (Galo[0][0]=='O' && Galo[1][0]=='O' && Galo[2][0]=='O') || //primeira coluna
       (Galo[0][1]=='O' && Galo[1][1]=='O' && Galo[2][1]=='O') || //segunda coluna
       (Galo[0][2]=='O' && Galo[1][2]=='O' && Galo[2][2]=='O') || //terceita coluna
       (Galo[0][0]=='O' && Galo[1][1]=='O' && Galo[2][2]=='O') || //primeira cruz
       (Galo[0][2]=='O' && Galo[1][1]=='O' && Galo[2][0]=='O') //segunda cruz
       ){
        win=2;
       }
}
for(i=0; i<DIM; i++)
    {
        for(j=0; j<DIM; j++)
        {
        printf("%c %c", Galo[i][j], j==DIM-1?' ':'|');
        }
    if(i!=DIM-1) printf("\n-------\n");
    }

    if(win==1)
        printf("\nJogador 1 ganha (X)");
    else
        printf("\nJogador 2 ganha (O)");
}
