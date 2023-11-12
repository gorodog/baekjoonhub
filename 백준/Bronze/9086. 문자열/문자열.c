#include <stdio.h>
#include <string.h>


int main() {
    int a = 0;
    scanf("%d", &a);

    char text[1001] = { 0 };

    for (int i = 0; i < a; i++) {
        scanf("%s", text);
        printf("%c%c\n", text[0], text[strlen(text) - 1]);
    }

    return 0;
}