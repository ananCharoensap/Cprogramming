#include <stdio.h>
// ส่วนที่ 1 ส่วนการดึง Library มาใช้

void main() {
// ส่วนที่ 2 ส่วนการสร้าง Function หลัก

// =================== ตัวแปร ===================

char stdnt_id[13], name[20], surname[20], username[20], password[20], email[50];
int age;
float weight, height;

// =================== ตัวแปร ===================


// =================== การรับข้อมูล ===================

printf("Your student ID is: ");
scanf("%s", &stdnt_id);

printf("Your name is: ");
scanf("%s", &name);

printf("Your surname is: ");
scanf("%s", &surname);

printf("Your age is: ");
scanf("%d", &age);

printf("Your username is: ");
scanf("%s", &username);

printf("Your password is: ");
scanf("%s", &password);

printf("Your email is: ");
scanf("%s", &email);

printf("Your weight is: ");
scanf("%f", &weight);

printf("Your height is: ");
scanf("%f", &height);

// =================== การรับข้อมูล ===================


// =================== การแสดงผลข้อมูล ===================

printf("Success \n");
printf("Your student ID is %s\n", stdnt_id);
printf("Your name is %s\n", name);
printf("Your surname is %s\n", surname);
printf("Your age is %d\n", age);
printf("Your username is %s\n", username);
printf("Your password is %s\n", password);
printf("Your email is %s\n", email);
printf("Your weight is %.2f\n", weight);
printf("Your height is %.2f", height);

// =================== การแสดงผลข้อมูล ===================


}