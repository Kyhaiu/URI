#include<stdio.h>
#include <string.h>

int main(){

    char a[13], b[13], c[13];

    scanf("%s %s %s", &a, &b, &c);

    if(strcmp(a, "vertebrado") == 0){
        if(strcmp(b, "ave") == 0){
            if(strcmp(c, "carnivoro") == 0){
                printf("aguia\n");
            } else{
                printf("pomba\n");
            }
        } else if(strcmp(b, "mamifero") == 0){
            if(strcmp(c, "herbivoro") == 0){
                printf("vaca\n");
            } else{
                printf("homem\n");
            }
        }
    } else if(strcmp(a, "invertebrado") == 0){
        if(strcmp(b, "inseto") == 0){
            if(strcmp(c, "hematofago") == 0){
                printf("pulga\n");
            } else{
                printf("lagarta\n");
            }
        } else if(strcmp(b, "anelideo") == 0){
            if(strcmp(c, "hematofago") == 0){
                printf("sanguessuga\n");
            } else{
                printf("minhoca\n");
            }
        }
    }
}
