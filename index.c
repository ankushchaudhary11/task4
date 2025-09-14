#include <stdio.h>

// Function to find the largest number in an array
int findLargest(int arr[], int size) {
    int max = arr[0];  // assume first element is largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;

    // Ask user for array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // Input array values
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function to find largest
    int largest = findLargest(arr, n);

    // Output result
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
