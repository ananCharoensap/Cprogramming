// ดึง library
#include <stdio.h>

// ==================== ประกาศตัวแปร =======================
    float num1, num2;
    char ops;

// ================== ประกาศ Function =====================
double operation(float num1,float num2, char ops) {
    switch (ops) {
        case '+':
            return num1 + num2;
            break;
        case '-':
            return num1 - num2;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            return num1 / num2;
            break;
        default:
            break;
    }
}

int main() {
    // ======================= รับค่า ===========================
    printf("********************************\n");
    printf("Input your first number: ");
    scanf("%f", &num1);
    printf("Input your operator + - * /: ");
    scanf("%s", &ops);
    printf("Input your second number: ");
    scanf("%f", &num2);

    // ===================== ประมวลผล =========================
    printf("Total : %.2f\n", operation(num1, num2, ops));
    printf("********************************\n");
    printf("Hello Anan !!");
    return 0;
}
