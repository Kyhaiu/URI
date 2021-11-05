#include <stdio.h>

int main() {

    char nome;
    double salario, vendas, totalSal;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    totalSal = (salario + (vendas * 0.15));

    printf("TOTAL = R$ %.2f\n", totalSal);
    return 0;
}
