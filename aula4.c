/*Verificar se tr�s n�meros formam um tri�ngulo e, se sim, identificar o tipo de tri�ngulo */
#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Digite os tres lados do triangulo (separados por espaco): ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triangulo equilatero.\n");
        } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}
