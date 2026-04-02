#include <stdio.h>

void main(){
    int x, *p;
    x=125;
    p=&x;

    printf("Hola mundo\n");
    printf("\n-----------------\n");

    printf("\nEl contenido del puntero es: %p", p);
    printf("\nLa dirección almacenada por el puntero es: %p", p);
    printf("\nLa dirección de memoria de la variable es: %p", &x);
    printf("\nLa dirección de memoria del puntero es: %p", &p);
    printf("\nEl tamaño de la memoria utilizada por la variable es %d", sizeof(x));

}