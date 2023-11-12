#include <stdio.h>

int main() {
	int t = 0;
	scanf("%d", &t);

	int hotel[99][99] = { 0 }; 

	int h, w, n = 0; // h+1, w+1
	for (int t_i = 0; t_i < t; t_i++) {
		scanf("%d %d %d", &h, &w, &n);

		// 호텔 방번호 할당
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				hotel[i][j] = ((i + 1) * 100) + (j + 1);
			}
		}

		// 호실 배정
		int k = n - (h * (n / h)); // 정수(층)
		int l = (n / h) + 1; // 정수(호실)
		if (k == 0)
			printf("%d\n", hotel[h-1][l-2]);
		else
			printf("%d\n", hotel[k - 1][l - 1]);
	}

	return 0;
}