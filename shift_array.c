// Task 1: Shifting an array 
// The function will shift an array of the given size to the right n times.
// The element at the end of the array is moved to the front (index 0).
// 12/12/2023

#include <stdio.h>

void shift(int arr[], int size, int n) {

    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[(i + n) % size] = arr[i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
    printf("Array after shifting %d time(s): [", n);
    for (int j = 0; j < size; j++) {
        printf("%d", arr[j]);
        if (j != size - 1) {
            printf(", ");
        } 
    }
    printf("]\n");
}
int main () {
    int array_size;
    printf("Enter array size: ");
    scanf("%d", &array_size);
    int array[array_size];
    printf("Enter array values: ");
    int i = 0;
    while (i < array_size) {
        scanf("%d", &array[i]);
        i++;
    }
    int n;
    printf("Enter shift: ");
    scanf("%d", &n);

    shift(array, array_size, n);

}

