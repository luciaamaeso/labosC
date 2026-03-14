#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char filename[1024];
    printf("¿De que fichero deseas conocer el tamanio?");
    if (fgets(filename, sizeof filename, stdin) == NULL) return 1;
    size_t len = strlen(filename);
    if (len > 0 && filename[len-1] == '\n') filename[len-1] = '\0';

    FILE *f = fopen(filename, "rb");
    if (!f) {
        perror("No se puede abrir el fichero");
        return 1;
    }

    long count = 0;
    int c;
    while ((c = fgetc(f)) != EOF) {
        count++;
    }

    fclose(f);

    printf("El tamanio del fichero es de %ld\n", count);
    return 0;
}
