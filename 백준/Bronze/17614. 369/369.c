#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);

    int count = 0;

    for (int i = 1; i < n + 1; i++) {
        int i_2 = i;
        while (i_2 > 0) {
            if (i_2 % 10 == 3 || i_2 % 10 == 6 || i_2 % 10 == 9)
                count++;
            i_2 /= 10;
        }
    }

    printf("%d", count);

    return 0;
}