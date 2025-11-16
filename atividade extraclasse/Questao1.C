#include <stdio.h>

float calcularMedia(int v[], int tam) {
    int i, soma = 0;
    for(i = 0; i < tam; i++)
        soma += v[i];
    return (float)soma / tam;
}

int maiorValor(int v[], int tam) {
    int i, maior = v[0];
    for(i = 1; i < tam; i++)
        if(v[i] > maior)
            maior = v[i];
    return maior;
}

int menorValor(int v[], int tam) {
    int i, menor = v[0];
    for(i = 1; i < tam; i++)
        if(v[i] < menor)
            menor = v[i];
    return menor;
}

int contarPares(int v[], int tam) {
    int i, cont = 0;
    for(i = 0; i < tam; i++)
        if(v[i] % 2 == 0)
            cont++;
    return cont;
}

int main() {
    int vetor[10], i;

    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);

    printf("Media: %.2f\n", calcularMedia(vetor, 10));
    printf("Maior valor: %d\n", maiorValor(vetor, 10));
    printf("Menor valor: %d\n", menorValor(vetor, 10));
    printf("Quantidade de pares: %d\n", contarPares(vetor, 10));

    return 0;
}
