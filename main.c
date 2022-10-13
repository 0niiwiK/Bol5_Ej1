#include <stdio.h>

int main() {
    int numtriangulos=0;
    float lado1=0,lado2=0,lado3=0;
    printf("Ingrese la cantidad de triangulos: ");
    scanf("%d",&numtriangulos);
    for (int i=0;i<numtriangulos;i++){
        printf("Ingrese el lado 1: ");
        scanf("%f",&lado1);
        printf("Ingrese el lado 2: ");
        scanf("%f",&lado2);
        printf("Ingrese el lado 3: ");
        scanf("%f",&lado3);
        if (lado1==lado2 && lado2==lado3)
            printf("Es un triangulo equilatero\n");
        else if (lado1!=lado2 && lado2!=lado3 && lado1!=lado3)
            printf("Es un triangulo escaleno\n");
        else
            printf("Es un triangulo isosceles\n");
    }
    return 0;
}
