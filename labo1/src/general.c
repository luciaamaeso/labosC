#include <stdio.h>

int ffichnumcarac(char c, FILE * fp)
{
    int count = 0;
    int ch;
    if (fp == NULL) return 0;
    while ((ch = fgetc(fp)) != EOF) {
        count++;
    }
    return count;
}
