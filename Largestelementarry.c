//Name: Noorealam
//branch:Civil FE/B
//UIN:2510006
//Rollno:06
#include <stdio.h>

int main() {
    int n, i;
    float arr[100], largest;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Assume first element is the largest
    largest = arr[0];

    // Compare with remaining elements
    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }

    // Display result
    printf("The largest element in the array is: %.2f\n", largest);

    return 0;
}
