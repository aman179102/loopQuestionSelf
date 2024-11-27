#include <stdio.h>

int main() {
    int input, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &input);

    // Handle the first two terms of the Fibonacci sequence
    if (input >= 1) {
        printf("%d ", first); // Print the first term
    }
    if (input >= 2) {
        printf("%d ", second); // Print the second term
    }

    // Calculate the remaining Fibonacci numbers
    for (int i = 3; i <= input; i++) {
        next = first + second;  // Fibonacci number is the sum of the previous two
        printf("%d ", next);

        // Update first and second for next iteration
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
