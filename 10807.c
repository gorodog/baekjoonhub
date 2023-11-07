#include <stdio.h>

int main(void) {
	int N, n;
	int x = 0;
	scanf("%d", &N);

	int a[10000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &n);

	for (int i = 0; i < N; i++) {
		if (a[i] == n)
			x++;
	}
	printf("%d", x);

	return 0;

}