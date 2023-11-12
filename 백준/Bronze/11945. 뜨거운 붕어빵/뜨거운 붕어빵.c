#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h>

int main() {
	int a, b = 0;
	char bread[10][11] = { 0 }; // 문자열 \0

	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++)
		scanf("%s", bread[i]);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			printf("%c", bread[i][b - j - 1]);
		printf("\n");
	}

	return 0;
}

//int main() {
//    int a, b = 0;
//    scanf("%d %d", &a, &b);
//
//    char** bread;
//    bread = (char**)malloc(sizeof(char*) * a);
//    for (int i = 0; i < a; i++) {
//        bread[i] = (char*)malloc(sizeof(char) * b);
//    }
//
//    for (int i = 0; i < a; i++) {
//        scanf("%s", bread[i]);
//    }
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < b; j++) {
//            printf("%c", bread[i][b - j - 1]);
//        }
//        printf("\n");
//    }
//   
//    for (int i = 0; i < a; i++)
//        free(bread[i]);
//    free(bread);
//
//    return 0;
//}