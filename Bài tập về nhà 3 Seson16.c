#include <stdio.h>

void sum(int *a, int *b, int tong) {
    tong = *a + *b;
}
int main() {
    int num1 = 15;
    int num2 = 25;
    int tong = 0;
    sum(&num1, &num2, &tong);
    printf("Tong cua %d va %d la: %d\n", num1, num2, tong);
    return 0;
}
