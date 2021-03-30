#include <stdio.h>
// ดึง library

void main() {
    // ============== ประกาศตัวแปร ===============
    int n = 2;

    // ================ Process =================
    do {
        printf("%d \t", n);
        if(n % 5 == 0) printf("\n");
        n += 2;
    } while (n < 101);

}