#include <stdio.h>
// ดึง library

void main() {
    // =============== ประกาศตัวแปร ================
    int num[5][9] = {
        {0, 1, 2, 3, 4, 5, 6, 7, 8},
        {9, 10, 11, 12, 13, 14, 15, 16, 17},
        {18, 19, 20, 21, 22, 23, 24, 25, 26},
        {27, 28, 29, 30, 31, 32, 33, 34, 35},
        {36, 37, 38, 39, 40, 41, 42, 43, 44}
    };
    int n = 0;
    int j = 1;

    // ================ ประมวลผล =================
    for(int a=0;a<5;a++) {
        for(int b=0;b<9;b++) {
            printf("%d,\t", num[a][b]);
            n++;
            if(n == j) {
                printf("\n");
                j++;
                n=0;
            }
        }
    }

}