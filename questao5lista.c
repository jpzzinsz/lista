#include <stdio.h>

int main() {
    int A, B;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &A);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &B);

    if (A == B) {
        printf("Os valores lidos sao iguais\n");
    } else if (A > B) {
        printf("%d eh maior que %d\n", A, B);
        if (A % B == 0) {
            printf("%d eh multiplo de %d\n", A, B);
        } else {
            printf("%d nao eh multiplo de %d\n", A, B);
        }
    } else {
        printf("%d eh maior que %d\n", B, A);
        if (B % A == 0) {
            printf("%d eh multiplo de %d\n", B, A);
        } else {
            printf("%d nao eh multiplo de %d\n", B, A);
        }
    }

    return 0;
}
