#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Ek number enter karo: ");
    scanf("%d", &number);

    originalNumber = number;

    // Number ke digits ki count find karte hain
    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    // Armstrong number check karte hain
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number) {
        printf("%d ek Armstrong number hai.\n", number);
    } else {
        printf("%d ek Armstrong number nahi hai.\n", number);
    }

    return 0;
}
