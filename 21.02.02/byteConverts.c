#include <stdio.h>
// ดึง library

void main() {
    float byte;
    printf("Please input your byte : ");
    scanf("%f", &byte);

    // ================= Process ====================
    if(byte < 1024) {
        printf("Size : %.2f Bytes", byte);W
    } else if (byte < 1048576) {
        printf("Size : %.2f KB", byte / 1024);
    } else if (byte < 1073741824) {
        printf("Size : %.2f MB", byte / 1048576);
    } else {
        printf("Size : %.2f GB", byte / 1073741824);
    }
    printf("\nThank you!");
}