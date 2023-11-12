#include <stdio.h>
#include <ctype.h>


int main() {
    char a[101] = { 0 };

    scanf("%s", a);
    
    for (int i = 0; a[i] != '\0'; i++) {
        if (islower(a[i])) {
            a[i] = toupper(a[i]);
        }
        else if (isupper(a[i])) {
            a[i] = tolower(a[i]);
        }
    }

    printf("%s", a);

    return 0;
}