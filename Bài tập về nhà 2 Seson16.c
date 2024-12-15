#include <stdio.h>
void giatri(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    
    int x = 2;
    int y = 20;

    printf("Truoc khi hoan doi la:\n");
    printf("x = %d, y = %d\n", x, y);
    giatri(&x, &y);

    printf("Sau khi hoan doi la:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
