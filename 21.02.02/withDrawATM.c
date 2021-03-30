#include <stdio.h>
// ดึง library

void main() {
    // ================= ประกาศตัวแปร ==================
    int total = 50000, money;

    // =================== รับค่า ======================
    printf("Please input your money : ");
    scanf("%d", &money);

    // ================= Process ====================
    if (money > 99) { // มากกว่า 100 บาทขึ้นไป
        if (money % 100 == 0) { // ห้ามใส่เป็นเศษ
            if (money > 20000) { // ห้ามเกิน 20,000
                printf("Your limit withdraw is 20,000 BTH");
            } else {
                printf("Your total money is %d ", total - money);
            }
        } else {
            printf("Incorrect Amount");
        }
    } else {
        printf("You have to withdraw money at least 100 BTH");
    }
    printf("\nThank you!");
}