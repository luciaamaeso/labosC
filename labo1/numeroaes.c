#include <stdio.h>
int ffichnumcarac(char c, FILE *fp);

int main() {
    char nombre[80], c;
    FILE *fp;
    int contador = 0;
    printf("¿De qué fichero deseas conocer el número de aes?");
    scanf("%s", nombre);
    fp = fopen(nombre, "r");
    if (fp == NULL) {
        printf("No se puede abrir el fichero %s \n", nombre);
        return -1;
    } else {
        contador = ffichnumcarac('a', fp);
        fclose(fp);
        printf("El número de a-s es de %d\n", contador);
    }
    return 0;
}

/* ffichnumcarac está implementada en general.c */