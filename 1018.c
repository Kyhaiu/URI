#include<stdio.h>

int main(){

    int valor, cent, deze, unid, aux;

    scanf("%d", &valor);

    cent = (valor / 100);
    deze = ((valor%100) /10);
    unid = ((valor%100)%10);

    printf("%d\n", valor);
    if(cent > 0){
        printf("%d nota(s) de R$ 100,00\n", cent);
    }else{
        printf("0 nota(s) de R$ 100,00\n");
    }
    if(deze >=5){
        printf("1 nota(s) de R$ 50,00\n");
        deze = deze - 5;
    }else{
        printf("0 nota(s) de R$ 50,00\n");
    }
    if(deze >= 2 || deze <= 4){
        printf("%d nota(s) de R$ 20,00\n", deze/2);
        deze = deze - 2;
    }else{
        printf("0 nota(s) de R$ 20,00\n");
    }
    if(deze == 1){
        printf("%d nota(s) de R$ 10,00\n", deze);
        deze = deze - 1;
    }else{
        printf("0 nota(s) de R$ 10,00\n");
    }
    if(unid >= 5 && unid <= 9){
        printf("1 nota(s) de R$ 5,00\n");
        unid = unid - 5;
    }else{
        printf("0 nota(s) de R$ 5,00\n");
    }
    if(unid > 0 && unid >= 2 && unid <= 4){
        aux = unid/2;
        unid = unid - (aux * 2);
        printf("%d nota(s) de R$ 2,00\n", aux);
    }else{
        printf("0 nota(s) de R$ 2,00\n");
    }
    if(unid > 0){
       printf("1 nota(s) de R$ 1,00\n");

    } else{
       printf("0 nota(s) de R$ 1,00\n");
    }
    return 0;
}
