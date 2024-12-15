#include <stdio.h>
void phantu(int arr[], int value, int index) {
    arr[index] = value;
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    printf("Mang ban dau: ");
    phantu(array, 5);
    
    thaydoi(array, 99, 2);

    printf("Mang sau khi cap nhat: ");
    phantu(array, 5);

    return 0;
}
