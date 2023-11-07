#include <stdio.h>
#include <string.h>


int joi(char *a){
	int len = strlen(a);
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] == 'J' && a[i + 1] == 'O' && a[i + 2] == 'I')
			count++;
	}
	return count;
}

int ioi(char*a){
	int len = strlen(a);
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] == 'I' && a[i + 1] == 'O' && a[i + 2] == 'I')
			count++;
	}
	return count;
}

int main(void){
	char a[10000] = { 0 };

	scanf("%s", a);

	printf("%d\n", joi(a));
	printf("%d\n", ioi(a));

	return 0;
}