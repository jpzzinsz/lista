#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, n2, soma, digito;

    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d eh par\n", n);
    }else{
        printf("%d eh impar\n", n);
    }

    n2 = n;

    soma = 0;

    while (n2 > 0){
        digito =  n2 % 10;
        soma = soma + digito;
        n2 = n2 / 10;
    }

    printf("A soma dos algorismos de %d eh %d\n", n, soma);

    return 0;
}