#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double principal = 5000.0;
    int years = 15;

    for (double rate = 0.10; rate < 0.125; rate += 0.005) {
        printf("----------------------------------------\n");
        printf("Interest Rate: %.1f%%\n", rate * 100);
        printf("Year\tAmount on deposit ($)\n");

        double amount = principal;
        for (int year = 1; year <= years; year++) {
            amount = amount * (1.0 + rate);
            printf("%d\t%.2f\n", year, amount);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}