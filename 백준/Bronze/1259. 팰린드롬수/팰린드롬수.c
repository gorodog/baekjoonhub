#include <stdio.h>
#include <string.h>

void f(char a[]) {
	int len = strlen(a);

	for (int i = 0; i < len; i++) {
		if (a[i] != a[len - i - 1]) {
			printf("no\n");
			return;
		}
	}

	printf("yes\n");
	return;

}

int main(void)
{
	char a[99999] = { 0 };

	while (scanf("%s", a)) {
		if (a[0] == '0')
			break;
		f(a);
	}

	return 0;
}