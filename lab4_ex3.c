#include <stdio.h>

int fibonacci(int n) {
    int a = 1, b = 1, temp;

    if (n == 1 || n == 2) {
        return 1;
    }

    for (int i = 3; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n;
    char continuar;

    do {
        printf("Digite um número inteiro maior ou igual a 1 para calcular o Fibonacci: ");
        scanf("%d", &n);

        if (n >= 1) {
            printf("Fibonacci de %d é %d\n", n, fibonacci(n));
        } else {
            printf("Erro: O número deve ser maior ou igual a 1.\n");
        }

        printf("Deseja continuar com o processo? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}
