#include "search_algos.h"

// Function to perform linear search
// Searches for a value in an array of integers
// Returns the index of the first occurrence of the value, or -1 if not found or if array is NULL
// Prints each comparison during the search
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        // Check if array is NULL
        return -1;
    }
    for (size_t i = 0; i < size; i++) {
        printf("Comparing value %d with array[%zu] = %d\n", value, i, array[i]);
        if (array[i] == value) {
            // If value is found, return the index
            return i;
        }
    }
    // If value is not found, return -1
    return -1;
}

int main() {
    // Sample array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;
    // Call linear_search function to search for value in the array
    int index = linear_search(arr, size, value);
    if (index != -1) {
        printf("Value %d found at index %d\n", value, index);
    } else {
        printf("Value %d not found in the array\n", value);
    }
    return 0;
}
