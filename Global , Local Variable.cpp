#include <stdio.h>

// Global variable
int globalCounter = 0;

// Static variable inside function
int sumFunction(int a, int b) {
    static int sum = 500;   // persists across function calls
    globalCounter++;        // increment global variable
    sum = sum + (a + b);
    return sum;
}

int main() {
    int result;
    result = sumFunction(2, 3);   // call #1
    printf("Result: %d\n", result);

    result = sumFunction(10, 20); // call #2
    printf("Result: %d\n", result);

    return 0;
}