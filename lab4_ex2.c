#include <stdio.h>

void divisores(int n) {
    printf("Divisores de %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    char continuar;

    do {
        printf("Digite um número inteiro positivo para calcular os divisores: ");
        scanf("%d", &n);

        if (n > 0) {
            divisores(n);
        } else {
            printf("Erro: O número deve ser maior que 0.\n");
        }

        printf("Deseja continuar com o processo? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}
