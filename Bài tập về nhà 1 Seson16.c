#include <stdio.h>

int main() {
    int number = 10;
    int scr = &number;

    printf("Gia tri cua number: %d\n", number);
    printf("Dia chi cua number: %p\n", &number);

    
    printf("Gia tri cua number (thong qua con tro): %d\n", scr);
    printf("Dia chi cua number (thong qua con tro): %p\n", scr);

    return 0;
}
