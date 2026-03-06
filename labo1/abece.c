#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char filename[1024];
    printf("Introduce el nombre del fichero a crear: ");
    if (fgets(filename, sizeof filename, stdin) == NULL) return 1;
    size_t len = strlen(filename);
    if (len > 0 && filename[len-1] == '\n') filename[len-1] = '\0';

    FILE *f = fopen(filename, "w");
    if (!f) {
        perror("No se puede crear el fichero");
        return 1;
    }

    // Escribir abecedario en minúsculas
    for (char c = 'a'; c <= 'z'; c++) {
        fputc(c, f);
    }
    fputc('\n', f);
    // Escribir abecedario en mayúsculas
    for (char c = 'A'; c <= 'Z'; c++) {
        fputc(c, f);
    }
    fputc('\n', f);

    fclose(f);
    return 0;
}
