#include <stdio.h>

int removeKey(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[count++] = arr[i]; // Shift elements not equal to key
        }
    }
    return count; // Return the count of remaining elements
}

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of the array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to remove: ");
    scanf("%d", &key);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newSize = removeKey(arr, n, key);

    printf("Array after removing %d: ", key);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of values not equal to %d: %d\n", key, newSize);

    return 0;
}
