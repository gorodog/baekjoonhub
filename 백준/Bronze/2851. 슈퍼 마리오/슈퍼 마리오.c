#include <stdio.h>


int score(int a[]) {

	int total = 0;
	
	for (int i = 0; i < 10; i++) {
		if ((total + a[i] - 100) == (100 - total)) {
			total += a[i];
			break;
		}
		else if ((100 - total) > ((total + a[i]) - 100))
			total += a[i];
		else
			break;
	}

	return total;
}


int main(void) {
	int a[10] = { 0 };

	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	printf("%d", score(a));
}