#include <stdio.h>

int main() {
    int n;
    

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
int a[n];
    

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print the array in reverse order
    printf("Array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}
