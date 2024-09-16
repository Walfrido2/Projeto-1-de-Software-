#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {  
        resultado *= i;
    }

    return resultado;
}

int main() {
    int n;
    char continuar;

    do {
        printf("Digite um número inteiro de 0 a 12 para calcularmos o fatorial: ");
        scanf("%d", &n);

        // Corrigida a condição do if
        if (n >= 0 && n <= 12) {
            printf("Fatorial de %d é %d\n", n, fatorial(n));
        } else {
            printf("O número deve estar entre 0 e 12\n");
        }

        printf("Deseja continuar com o processo? (s/n): ");
        scanf(" %c", &continuar);  

    } while (continuar == 's' || continuar == 'S');  
    
    return 0;
}
