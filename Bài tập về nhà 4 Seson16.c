#include <stdio.h>
void length(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, arr[i]); // Truy cập phần tử bằng cách dùng arr[i]
    }
}
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;
    length(array, size);

    return 0;
}
