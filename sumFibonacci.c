#include <stdio.h>

int main() {
    long int input, first = 0, second = 1, next, sum = 0;

    // Prompt the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &input);

    // Handle the first two terms of the Fibonacci sequence and their sum
    if (input >= 1) {
        printf("%d ", first);  // Print the first term
        sum += first;          // Add the first term to the sum
    }
    if (input >= 2) {
        printf("%d ", second); // Print the second term
        sum += second;         // Add the second term to the sum
    }

    // Calculate the remaining Fibonacci numbers and their sum
    for (int i = 3; i <= input; i++) {
        next = first + second;  // Fibonacci number is the sum of the previous two
        printf("%d ", next);    // Print the Fibonacci number
        sum += next;            // Add the Fibonacci number to the sum

        // Update first and second for next iteration
        first = second;
        second = next;
    }

    // Display the sum of the Fibonacci series
    printf("\nSum of the Fibonacci series: %d\n", sum);

    return 0;
}
