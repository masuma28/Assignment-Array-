#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, count = 0;
    int arr[MAX_SIZE];

    // Input the number of elements
    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n <= 1) {
        printf("Please enter at least two elements.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Check divisibility by immediate previous element
    for (int i = 1; i < n; i++) {
        if (arr[i] % arr[i - 1] == 0) {
            count++;
        }
    }

    // Display result
    printf("Number of elements divisible by their immediate previous element: %d\n", count);

    return 0;
}
