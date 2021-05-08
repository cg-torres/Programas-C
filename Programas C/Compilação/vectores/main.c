#include <stdio.h>
#include <stdlib.h>

// EXERCICIO 2
/*
float max(float v[], int n)
{
    float maior = v[0];
    for (int i=0; i<n;i++){
        if(v[i]>maior)
            maior=v[i];
    }
    return maior;
}

int main()
{
    float teste[7] = {1.3, 2.4, 4.3, 3.5, 7.1, 6.657, 5.0};
    printf("O valore maximo e %f\n", max(teste, 7));
}
*/

#define MAX 3

void transpor(int v[MAX][MAX]){

int i, j, temp;

for(i=0; i<MAX; i++){
    for(j=i+1; j<MAX; j++){
        temp = v[i][j];
        v[i][j]=v[j][i];
        v[j][i]=temp;
    }
}
}

void imprime(int v[][MAX]){
int i,j;
for(i=0;i<MAX; i++){
    for(j=0;j<MAX;j++){
        printf("%d", v[i][j]);
    }
    putchar('\n');
}

}

main(){
int x[][MAX] = { {1,2,3}, {4,5,6}, {7,8,9}} ;

puts("MATRIZ INICIAL");
imprime(x);
transpor(x);
puts("DEPOIS DE TRANSPOSTA");
imprime(x);
}
