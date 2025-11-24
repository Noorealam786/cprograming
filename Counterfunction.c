//Name: Noorealam
//branch:Civil FE/B
//UIN:2510006
//Rollno:06
#include <stdio.h>

// Function definition
void counter() {
    static int count = 0;  // static variable retains its value between calls
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();
    return 0;
}
