#include <stdio.h>
#include <stdlib.h>

int main(){

    double salario, novosal;
    scanf("%lf", &salario);
    if(salario >=0 && salario <=400){
        novosal = (salario * 1.15);
        printf("Novo salario: %.2lf\n", novosal);
        printf("Reajuste ganho: %.2lf\n", novosal - salario);
        printf("Em percentual: 15 %%\n");
    }
    if(salario >400 && salario <=800){
        novosal = (salario * 1.12);
        printf("Novo salario: %.2lf\n", novosal);
        printf("Reajuste ganho: %.2lf\n", novosal - salario);
        printf("Em percentual: 12 %%\n");
    }
    if(salario >800 && salario <=1200){
        novosal = (salario * 1.10);
        printf("Novo salario: %.2lf\n", novosal);
        printf("Reajuste ganho: %.2lf\n", novosal - salario);
        printf("Em percentual: 10 %%\n");
    }
    if(salario >1200 && salario <=2000){
        novosal = (salario * 1.07);
        printf("Novo salario: %.2lf\n", novosal);
        printf("Reajuste ganho: %.2lf\n", novosal - salario);
        printf("Em percentual: 7 %%\n");
    }
    if(salario > 2000){
        novosal = (salario * 1.04);
        printf("Novo salario: %.2lf\n", novosal);
        printf("Reajuste ganho: %.2lf\n", novosal - salario);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
