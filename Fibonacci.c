#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) 
        return 0; // Base case: F(0) = 0
    else if (n == 1)
        return 1; // Base case: F(1) = 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive step
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Call the recursive function for each term
    }
    printf("\n");

    return 0;
}
