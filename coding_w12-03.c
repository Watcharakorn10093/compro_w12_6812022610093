#include <stdio.h>

void doubleArray(int *arr, int size) {
    
    for (int i = 0; i < size; i++) {
        *(arr + i) *= 2; 
    }
    
}

void printArray(const char *label, int arr[], int size) {
    printf("%s: ", label);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = 5; 
    printArray("Before", a, size);

    doubleArray(a, size);

    printArray("After ", a, size);

    return 0;
}