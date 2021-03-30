#include <stdio.h>

void main() {

    int box[3];

    printf("Enter : ");
    for(int i=0;i<2;i++) {
        scanf("%d", &box[i]);
    }
    printf("%d", box[0]);
    printf("%d", box[1]);

}