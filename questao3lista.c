#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, x;

    scanf("%d", &n);
    printf("senha cadastrada: %d\n", n);

    scanf("%d", &x);

    while(x != n){
        printf("senha invalida!\n");
        scanf("%d", &x);
    }

    if(x == n){
        printf("senha valida!\n");
    }

    return 0;
}