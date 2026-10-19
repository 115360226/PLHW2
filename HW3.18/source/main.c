#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    float sales;  // 銷售總額 (Sales)
    float sal;    // 總薪資收入 (Salary)

    // 輸入第一個銷售金額（若輸入 -1 則結束迴圈）
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while (sales != -1.0) {
       
        sal = 200.0 + (sales * 0.09);

        printf("Salary is:$%.2f\n\n", sal);  
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }
    system("pause");
    return 0;
}