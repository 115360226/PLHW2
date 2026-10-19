#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int acc_no;
    float beg_bal;
    float charges;
    float credits;
    float limit;
    float new_bal;

    // 輸入第一個帳號（若輸入 -1 則結束迴圈）
    printf("Enter account number (-1 to end): ");
    scanf("%d", &acc_no);

    while (acc_no != -1) {
        printf("Enter beginning balance: ");
        scanf("%f", &beg_bal);

        printf("Enter total charges: ");
        scanf("%f", &charges);

        printf("Enter total credits: ");
        scanf("%f", &credits);

        printf("Enter credit limit: ");
        scanf("%f", &limit);

        
        new_bal = beg_bal + charges - credits;

        
        if (new_bal > limit) {
            printf("Account:     %d\n", acc_no);
            printf("Credit limit:%.2f\n", limit);
            printf("Balance:     %.2f\n", new_bal);
            printf("Credit Limit Exceeded.\n");
        }

      
        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &acc_no);
    }
    system("pause");
    return 0;
}