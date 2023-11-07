#include <stdio.h>

int main(void) {

	int b[30];
	for (int i = 0; i < 30; i++)
		b[i] = 0;

	int a[28];
	int n;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		a[i] = n;
		b[n - 1] = 1;
	}

	for (int i = 0; i < 30; i++) {
		if (b[i] == 0)
			printf("%d \n", i+1);
	}

	return 0;

}