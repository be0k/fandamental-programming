#include <stdio.h>

void sortArray(int arr[], int size);

void sortArray(int arr[], int size) {
    int i, j, temp;

    for (i = 1; i < size; i++) {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main() {
    int arr[] = {10, 4, 8, 1, 6,4,7,2346,123};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    sortArray(arr, size);

    printf("\nSorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
