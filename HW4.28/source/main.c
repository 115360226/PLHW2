#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int pc;

    printf("輸入薪資代碼 (1: 經理, 2: 小時工, 3: 抽成員工, 4: 計件工人, -1: 結束): ");
    scanf("%d", &pc);

    while (pc != -1) {
        switch (pc) {
        case 1: {
            double ws;
            printf("輸入經理的每週固定薪資: ");
            scanf("%lf", &ws);
            printf("週薪為: $%.2f\n\n", ws);
            break;
        }
        case 2: {
            double hw, hrs, p;
            printf("輸入時薪: ");
            scanf("%lf", &hw);
            printf("輸入工作時數: ");
            scanf("%lf", &hrs);

            if (hrs <= 40.0) {
                p = hw * hrs;
            }
            else {
                p = 40.0 * hw + (hrs - 40.0) * hw * 1.5;
            }
            printf("週薪為: $%.2f\n\n", p);
            break;
        }
        case 3: {
            double gs, p;
            printf("輸入每週總銷售額: ");
            scanf("%lf", &gs);
            p = 250.0 + gs * 0.057;
            printf("週薪為: $%.2f\n\n", p);
            break;
        }
        case 4: {
            double amt, p;
            int items;
            printf("輸入每件物品的固定金額: ");
            scanf("%lf", &amt);
            printf("輸入生產件數: ");
            scanf("%d", &items);
            p = amt * items;
            printf("週薪為: $%.2f\n\n", p);
            break;
        }
        default:
            printf("無效的薪資代碼。\n\n");
            break;
        }

        printf("輸入薪資代碼 (1: 經理, 2: 小時工, 3: 抽成員工, 4: 計件工人, -1: 結束): ");
        scanf("%d", &pc);
    }
    system("pause");
    return 0;
}