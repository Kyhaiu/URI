#include <stdio.h>

int main() {

    int func, horas;
    float salario, valHora;

    scanf("%d", &func);
    scanf("%d", &horas);
    scanf("%f", &valHora);

    salario = (horas * valHora);

    printf("NUMBER = %d\n", func);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}
