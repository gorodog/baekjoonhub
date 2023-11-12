#include <stdio.h>


int main() {
	int n, m = 0;
	scanf("%d %d", &n, &m);

	unsigned char a[400][1200] = { 0 };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (m * 3); j++)
			scanf("%hhu", &a[i][j]); // unsigned char는 형식 지정자가 hhu
	}

	int ascii = 0;
	int code = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// printf("첫번째 %hhu\n", a[0][1]);
			ascii = 2126 * a[i][(3 * (j+1)) - 2 - 1] + 7152 * a[i][(3 * (j+1)) - 1 - 1] + 722 * a[i][(3 * (j+1)) - 1];
			if (ascii >= 0 && ascii < 510000)
				code = 35;
			else if (ascii >= 510000 && ascii < 1020000)
				code = 111;
			else if (ascii >= 1020000 && ascii < 1530000)
				code = 43;
			else if (ascii >= 1530000 && ascii < 2040000)
				code = 45;
			else if (ascii >= 2040000)
				code = 46;
			printf("%c", code);
		}
		printf("\n");
	}

	return 0;
}