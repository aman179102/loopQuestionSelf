#include <stdio.h>

int binarySearch(int arr[], int find, int size) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2; // Mid calculate karo

        if (arr[mid] == find) {
            return mid; // Element mil gaya
        }

        if (arr[mid] < find) {
            low = mid + 1; // Right half mein dhoondo
        } else {
            high = mid - 1; // Left half mein dhoondo
        }
    }

    return -1; // Element nahi mila
}

int main() {
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);
    int find;

    // Array input
    printf("Enter %d numbers in ascending order:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Element to find
    printf("Enter the element that you want to find: ");
    scanf("%d", &find);

    // Call binarySearch
    int found = binarySearch(array, find, size);

    if (found != -1) {
        printf("\nElement %d found at index %d\n", find, found);
    } else {
        printf("\nElement %d not found in the array\n", find);
    }

    return 0;
}
