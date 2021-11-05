#include<stdio.h>
#include<math.h>

int main(){

    double valor, valor2;
    int aux, aux2;

    scanf("%lf", &valor);
    valor2 = valor;

    printf("NOTAS:\n");

    aux = valor / 100;
    valor = (int)valor % 100;
    printf("%d nota(s) de R$ 100.00\n", aux);

    aux = valor / 50;
    valor = (int)valor % 50;
    printf("%d nota(s) de R$ 50.00\n", aux);

    aux = valor / 20;
    valor = (int)valor % 20;
    printf("%d nota(s) de R$ 20.00\n", aux);

    aux = valor / 10;
    valor = (int)valor % 10;
    printf("%d nota(s) de R$ 10.00\n", aux);

    aux = valor / 5;
    valor = (int)valor % 5;
    printf("%d nota(s) de R$ 5.00\n", aux);

    aux = valor / 2;
    valor = (int)valor % 2;
    printf("%d nota(s) de R$ 2.00\n", aux);


    printf("MOEDAS:\n");

    aux = valor / 1;
    valor = (int)valor % 1;
    printf("%d moeda(s) de R$ 1.00\n", aux);

    valor2 = fmod(valor2, 1) * 100 ;

    aux2 = valor2 / 50;
    valor2 = (int)valor2 % 50;
    printf("%d moeda(s) de R$ 0.50\n", aux2);

    aux2 = valor2 / 25;
    valor2 = (int)valor2 % 25;
    printf("%d moeda(s) de R$ 0.25\n", aux2);

    aux2 = valor2 / 10;
    valor2 = (int)valor2 % 10;
    printf("%d moeda(s) de R$ 0.10\n", aux2);

    aux2 = valor2 / 5;
    valor2 = (int)valor2 % 5;
    printf("%d moeda(s) de R$ 0.05\n", aux2);

    aux2 = valor2 / 1;
    printf("%d moeda(s) de R$ 0.01\n", aux2);

    return 0;
}
