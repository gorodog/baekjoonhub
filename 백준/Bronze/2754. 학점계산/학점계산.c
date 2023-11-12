#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
    char a[3] = { 0 };

    scanf("%s", a);


    const char* grades[] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D+", "D0", "D-", "F" };
    double scores[] = { 4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0 };

    for (int i = 0; i < 13; i++) {
        if ((strcmp(a, grades[i])) == 0) {
            printf("%.1lf", scores[i]); // .1안 쓰면 4.000 반환
            break;
        }
    }

    return 0;
}