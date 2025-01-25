#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    printf("Ek number enter karo: ");
    scanf("%d", &number);

    originalNumber = number;

    // Number ko reverse karte hain
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Palindrome check karte hain
    if (originalNumber == reversedNumber) {
        printf("%d ek palindrome number hai.\n", originalNumber);
    } else {
        printf("%d ek palindrome number nahi hai.\n", originalNumber);
    }

    return 0;
}
