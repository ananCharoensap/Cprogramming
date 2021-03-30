#include <stdio.h>
//  ดึง Library

void main() {
    // ================= ประกาศตัวแปร ====================
    int age;

    // ==================== รับค่า ========================
    printf("Please input your age : ");
    scanf("%d", &age);

    // ================== Process =======================
    if(age >= 50) {
        printf("old !!");
    } else {
        printf("young !!");
    }
    printf("\nThank you");
}