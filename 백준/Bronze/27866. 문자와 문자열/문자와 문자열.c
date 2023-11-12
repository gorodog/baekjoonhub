#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[1001] = { 0 };
    int b = 0;

    scanf("%s", a);
    scanf("%d", &b);

    printf("%c", a[b-1]);

    return 0;
}