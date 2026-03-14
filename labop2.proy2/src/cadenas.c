#include "../include/cadenas.h"

int mystrlen(const char *s) {
    int i = 0;
    for (int j = 0; s[j] != '\0'; j++) {
        if (s[j] != ' ') {
            i++;
        }
    }
    return i;
}
