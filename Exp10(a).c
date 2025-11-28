//Name: Noorealam
//branch:Civil FE/B
//UIN:251C006
//Rollno:06
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;  // Pointer variables

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Assign the address of numbers to pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Add values using pointers
    sum = *ptr1 + *ptr2;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}
