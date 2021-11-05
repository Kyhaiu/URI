#include<stdio.h>

int main(){

    int idade, a, m;

    scanf("%d", &idade);

    a = idade / 365;
    idade = idade - (a * 365);
    m = (idade / 30);
    idade = idade - (m * 30);

    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", idade);

    return 0;
}
