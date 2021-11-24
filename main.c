#include <stdio.h>

extern void bubble_sort(int* vetor, int tamanho);

int main() {
    int tamanho;
    int vetor[10];

    printf("Digite o tamanho do vetor(máximo de 10 elementos):\n");
    scanf("%d", &tamanho);
    printf("Agora digite os %d valores: \n", tamanho);
    for(int i = 0; i < tamanho && i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    bubble_sort(vetor, tamanho);
    printf("O vetor ordenado é:\n");
    for(int i = 0; i < tamanho && i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    puts("");
}