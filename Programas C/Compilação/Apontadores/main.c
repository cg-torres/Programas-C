#include <stdio.h>
#include <stdlib.h>
#define N_STRINGS 3

void Calc(float *v, int num , float *xmin, float *xmax){
int i;

for(i=0; i<)

}

int main(){

Calc(v,num,&xmin, &xmax);

}
/*
char * strsetup(char *str, char ch){

    int i;
    for(i=0; str[i]\='\0'; i++)
        str[i]=ch;
    return str;

}

main()
{
    char vector[N_STRINGS][20] = {"Ola", "Gui", "Mary Cookie"};
    char (*ptr)[20] = vector;

    char *p;

    while(ptr-vector<N_STRINGS){
        p=*ptr;
        while(*p)
            putchar(*p++);
        putchar("/n");
        ptr++;
    }
}

*/
/*
int main()
{

    int x=5, *px=&x;
    float y=5.0, *py=&y;
    printf("%d %ld\n", x,(long)px);
    printf("%d %ld\n", x+1,(long)(px+1));

    printf("%f %ld\n", y,(long)py);
    printf("%f %ld\n", y+1,(long)(py+1));



}
*/
/*
int main()
{
    char s[100];
    char *ptr = s;

    printf("Introduza uma String: "); gets(s);

    if(*ptr =='\0')
        return;

    while(*ptr!='\0')
        putchar(*ptr++);

    //ptr--;

    while(ptr>=s)
        putchar(*ptr--);
}
*/
