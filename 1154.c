#include <stdio.h>

int main() {

    int idade, qtd = 0;
    float media = 0;

    while (1) {
        scanf("%d", & idade);
        if (idade < 0) {
            break;
        } 
        else {
            qtd += 1;
            media += idade;
        }
    }

    media = media / qtd;
    printf("%.2f\n", media);

    return 0;
}
