#include <stdio.h>
#include "../include/cadenas.h"

#define N 255

int main(void) {
    char cad[N];
    printf("\nIntroduce una cadena: \n");
    fgets(cad, sizeof(cad), stdin);
    int lon = mystrlen(cad);
    if (lon > 0 && cad[lon-1] == '\n') {
        lon--;
    }
    printf("\nLa longitud de la cadena %s es %d", cad, lon);
    return 0;
}
