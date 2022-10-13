#include <stdio.h>

int main() {
    int numtriangulos=0,cont_equil=0,cont_escal=0,cont_isos=0;
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
        if (lado1==lado2 && lado2==lado3){
            printf("Es un triangulo equilatero\n");
            cont_equil++;
        }
        else if (lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
            printf("Es un triangulo escaleno\n");
            cont_escal++;
        }
        else {
            printf("Es un triangulo isosceles\n");
            cont_isos++;
        }
    }
    printf("Cantidad de triangulos equilateros: %d\n",cont_equil);
    printf("Cantidad de triangulos isosceles: %d\n",cont_isos);
    printf("Cantidad de triangulos escalenos: %d\n",cont_escal);
        if (cont_equil<cont_isos){
            if (cont_equil<cont_escal)
                printf("Hay menor cantidad de triangulos equilateros");
            else
                printf("Hay menor cantidad de triangulos escalenos");
        } else if(cont_isos==cont_equil==cont_escal)
            printf("Hay el mismo numero de triangulos del mismo tipo");
        else {
            if (cont_isos<cont_escal)
                printf("Hay menor cantidad de triangulos isosceles");
            else
                printf("Hay menor cantidad de triangulos escalenos");
        }
    return 0;
}
