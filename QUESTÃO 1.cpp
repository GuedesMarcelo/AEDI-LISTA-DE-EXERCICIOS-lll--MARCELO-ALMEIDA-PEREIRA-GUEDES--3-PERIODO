#include <stdio.h>

int main() {
    int n, i, j;
    char temp;
    printf("Quantas letras? ");
    scanf("%d", &n);

    char letras[n];
    printf("Digite as letras:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &letras[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (letras[j] > letras[j + 1]) {
                temp = letras[j];
                letras[j] = letras[j + 1];
                letras[j + 1] = temp;
            }
        }
    }
    printf("Letras ordenadas: ");
    for (i = 0; i < n; i++) {
        printf("%c ", letras[i]);
    }
    return 0;
}

