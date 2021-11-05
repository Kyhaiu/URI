#include <stdio.h>

int main() {

    int qtd1, qtd2, cod1, cod2;
    double preco1, preco2, precoTot;

    scanf("%d%d%lf", &cod1, &qtd1, &preco1);
    scanf("%d%d%lf", &cod2, &qtd2, &preco2);

    precoTot = ((qtd1 * preco1) + (qtd2 * preco2));

    printf("VALOR A PAGAR: R$ %.2f\n", precoTot);
    return 0;
}
