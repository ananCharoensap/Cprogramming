#include <stdio.h>
// ดึง library

void main() {
    // ============== ประกาศตัวแปร ===============
    int n;

    // ================= รับค่า ===================
    while(n != 7) {
        printf("Please enter number : ");
        scanf("%d", &n);
        if(n != 7) printf("Incorrect\n");
    }

    // ================ Process =================
    printf("Correct!!");

}