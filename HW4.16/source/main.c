#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 9; i >= 0; i--) {
		for (int  j = 0; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 9; i >= 0; i--) {
		for (int k = 0; k < 9-i; k++) {
			printf(" ");
		}

		for (int j = 0; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i <= 9; i++) {
		for (int k = 0; k < 9 - i; k++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
	}