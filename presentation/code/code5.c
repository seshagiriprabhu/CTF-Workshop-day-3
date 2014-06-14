#define _GNU_SOURCE
#undef _FORTIFY_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vuln(char *str) {
    char buffer[64];
    strcpy(buffer, str);
}

int main(int argc, char **argv) {
    vuln(argv[1]);
    return 1;
}
