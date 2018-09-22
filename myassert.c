#include <stdio.h> // printf
#include <stdlib.h> // exit

#include "myassert.h"

void _myassert(int line, const char *file, int condition, const char *expr) {
    if (condition) return;
    printf("\n\nERROR: myassert condition failed at file %s line %d:\n%s\n\n", file, line, expr);
    exit(1);
}
