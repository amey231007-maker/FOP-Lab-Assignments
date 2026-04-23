#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside: x=%d y=%d\n", x, y);
}

int main() {
    int a = 5, b = 10;
    swap(a, b);
    printf("Outside: a=%d b=%d\n", a, b);
    return 0;
}
