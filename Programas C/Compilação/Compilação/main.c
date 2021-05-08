#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char op = '0';
    double num1, num2, resultado;


    do{

        printf(" (1) Somar\n");
        printf(" (2) Subtrair\n");
        printf(" (3) Multiplicar\n");
        printf(" (4) Dividir\n");
        printf(" (0) Sair\n");

        printf("Insira a opcao que deseja:\n");
        op = getche();
        printf("\n");

        if(op!='0'){

        printf("Insira o primeiro numero:\n>>>");
        scanf("%lf", &num1);
        printf("Insira o segundo numero:\n>>>");
        scanf("%lf", &num2);

        switch(op){
            case '1':
                resultado = num1 + num2;
                break;
            case '2':
                resultado = num1 - num2;
                break;
            case '3':
                resultado = num1 * num2;
                break;
            case '4':
                resultado = num1 / num2;
                break;
            default:
                printf("Operacao invalida!\n");
        }
        printf("O resultado e: %.2lf\n", resultado);
        }
        else
            printf("VOLTE SEMPRE!\n");
    } while(op !='0');
}
