#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    char a[101];

    while (scanf("%100[^\n]%*c", a) != EOF) {
        printf("%s\n", a);
    }

    return 0;
}