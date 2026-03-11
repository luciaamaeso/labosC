#include <stdio.h>
#include "../include/area.h"
#include "../include/aritmetica.h"

int main() {
    int x, y;
    printf("Dame dos numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("El area es %d\n", rectangulo(x,y));
    printf("La suma de los dos es %d\n", suma(x,y));
    return 0;
}