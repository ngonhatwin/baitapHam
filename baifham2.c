#include<stdio.h>

void hoanvi(int *x, int *y);
int main() {
    int x = 3, y = 5;
    printf("Truoc khi hoan vi: x = %d y = %d\n", x, y);
    hoanvi(&x, &y);
    printf("Sau khi hoan vi: x = %d y = %d", x, y);
}
void hoanvi(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
