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
scanf("%s", &username);

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
scanf("%d", &weight);

printf("Your height is: ");
scanf("%d", &height);


// =================== การรับข้อมูล ===================


// =================== การแสดงผลข้อมูล ===================

printf("Success \n");
printf("Your username is %s", &username);

// =================== การแสดงผลข้อมูล ===================

return 0;

}