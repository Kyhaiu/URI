#include<stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a,&b, &c);

    if(a < b){
        if(a < c){
            printf("%d\n", a);
            if(b < c){
                printf("%d\n", b);
                printf("%d\n", c);
            } else{
                printf("%d\n", c);
                printf("%d\n", b);
            }
        } else{
            if(c < b){
                printf("%d\n", c);
                printf("%d\n", a);
                printf("%d\n", b);
            }
        }
    }
    if(b < a){
        if(b < c){
            printf("%d\n", b);
            if(a < c){
                printf("%d\n", a);
                printf("%d\n", c);
            } else{
                printf("%d\n", c);
                printf("%d\n", a);
            }
        } else{
            if(a < c){
                printf("%d\n", a);
                printf("%d\n", c);
                printf("%d\n", b);
            }
        }
    }
    if(c < a){
        if(c < b){
            printf("%d\n", c);
            if(b < a){
                printf("%d\n", b);
                printf("%d\n", a);
            } else{
                printf("%d\n", a);
                printf("%d\n", b);
            }
        } else{
            if(a < b){
                printf("%d\n", a);
                printf("%d\n", b);
                printf("%d\n", c);
            }
        }
    }

    printf("\n%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}
