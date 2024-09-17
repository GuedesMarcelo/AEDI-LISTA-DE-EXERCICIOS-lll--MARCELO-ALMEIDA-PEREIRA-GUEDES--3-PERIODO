#include <stdio.h>

int main() {
    int n, i, j, temp;
    int trocou; 
    printf("Quantos numeros deseja inserir? ");
    scanf("%d", &n);

    int arr[n];
    printf("Digite os numeros:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        trocou = 0; 
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = 1; 
            }
        }
        if (trocou == 0) {
            break;
        }
    }
    printf("Numeros ordenados: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

