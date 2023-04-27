#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // reversing the array
    for(i=0; i<n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    printf("The reversed array is: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
