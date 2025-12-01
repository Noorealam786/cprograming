//Name: Noorealam
//branch: Civil FE/B
//UIN:251C006
//Rollno:06
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Pointer pointing to the last element of the array
    ptr = &arr[n - 1];

    printf("\nArray elements in reverse order:\n");
    for(i = n; i > 0; i--) {
        printf("%d ", *ptr);
        ptr--;   // Move pointer to previous element
    }

    return 0;
}
