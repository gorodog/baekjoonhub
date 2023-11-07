#include <stdio.h>

int main(void) {
	int N, x;
	scanf("%d %d", &N, &x);

	int a[10000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < N; i++) {
		if (a[i] < x){
			printf("%d ", a[i]);
		}
	}

	return 0;

}