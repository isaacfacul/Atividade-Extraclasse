#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    float x, y;
    int op;

    printf("Digite dois valores: ");
    scanf("%f %f", &x, &y);

    printf("Escolha a operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &op);

    switch(op) {
        case 1: printf("Resultado: %.2f\n", somar(x, y)); break;
        case 2: printf("Resultado: %.2f\n", subtrair(x, y)); break;
        case 3: printf("Resultado: %.2f\n", multiplicar(x, y)); break;
        case 4:
            if(y == 0)
                printf("Erro: Divisao por zero!\n");
            else
                printf("Resultado: %.2f\n", dividir(x, y));
            break;
        default: printf("Operacao invalida!\n");
    }

    return 0;
}
