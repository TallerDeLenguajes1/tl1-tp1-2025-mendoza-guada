#include <stdio.h>
#include <math.h>

int cuadrado(int a);
void cuadrado2(int a);
void mostrar_var_direc(int a);
void Invertir(int *a, int *b);
void Orden(int a, int b);


int main(){
    int x, valor1,valord1,valord2;
    x= 4;
    //a//
    printf("\n-----------\nApartado a\n-----------\nFunción tipo entero: %d al cuadrado es %d", x,cuadrado(x));
    //b//
    printf("\n-----------\nApartado b\n-----------");
    cuadrado2(x);
    //c//
    printf("\n-----------\nApartado c\n-----------\nIngrese un valor entero: ");
    scanf("%d", &valor1);
    mostrar_var_direc(valor1);
    //d//
    printf("\n-----------\nApartado d\n-----------\n");
    printf("Ingrese un valor entero: ");
    scanf("%d", &valord1);
    printf("\nIngrese otro valor entero: ");
    scanf("%d", &valord2);
    printf("\nLos valores ingresados son (%d, %d).\n", valord1, valord2);
    
    Invertir(&valord1,&valord2);
    printf("\nLos valores ingresados invertidos son (%d, %d).\n", valord1, valord2);
    //e//
    Orden(valord1, valord2);



    return 0;
}

int cuadrado(int a){
    return a*a;
}
void cuadrado2(int a){
    printf("\nFunción tipo void: %d al cuadrado es %d", a, a*a);
}
void mostrar_var_direc(int a){
    printf("\nLa variable es %d y su dirección de memoria es %p\n", a,&a);
}

void Invertir(int *a, int *b){
    int z=*a;
    *a=*b;
    *b=z;
}
void Orden(int a, int b){
    if (a<=b){
        printf("\nLos valores ingresados en orden son (%d, %d)", a,b);
            } else {
            printf("\nLos valores ingresados en orden son (%d,%d)", b,a);
        }
} 