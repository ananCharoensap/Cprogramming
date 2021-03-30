#include <stdio.h>
// import library

void main() {

    int score[3][3], total[3];

    // ======================== รับค่า ===========================
    printf("*************************************************\n");
    printf("Please input score in same line order by subject:\n");
    printf("Subject => 1.math\t2.programming\t3.science\n");

    for(int i=0;i<3;i++) {
        printf("Student %d : ", i+1);
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
        total[i] = score[i][0] + score[i][1] + score[i][2]; // รวมคะแนนเมื่อกรอกครบทุก 3 ครั้ง
    }
    // ===============================================================


    // ======================== แสดงผลลัพธ์ ===========================
    printf("*************************************************\n");
    printf("Total Score:\n");
    for(int i=0;i<3;i++) {
        printf("Student %d : %d\n", i+1, total[i]); // แสดงผลรวมคะแนนของแต่ละคน
    }
    printf("*************************************************\n");
    // ===============================================================
}
