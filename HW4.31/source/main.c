#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int K = 1; K <= (5 - i); K++) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2 - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++) {
        for (int K = 1; K <=  i; K++) {
            printf(" ");
        }
        for (int j = 1; j <= (5-i) * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}