#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n; 
    }

    int uniqueIndex = 0; 

    for (int i = 1; i < n; i++) {
        if (arr[uniqueIndex] != arr[i]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }
    return uniqueIndex + 1; 
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements of the array: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of unique elements: %d\n", newSize);

    return 0;
}
