#include <stdio.h>

int main()
{
    int input, countDigit = 0, temp, digit, arm = 0, mult = 1;
    printf("Enter a number \n");
    scanf("%d", &input);
    temp = input;
    while (temp != 0)
    {
        temp /= 10; // Counting The digits of typed number
        countDigit++;
    }
    temp = input;
    while (temp != 0)
    {
        digit = temp % 10; // extract last digit
        mult =1;  //reset mult because on every iteration the value of mult is changed by the below(for) loop 
        for (int i = 0; i < countDigit; i++)
        {
            mult = mult * digit; //mult can store the multiplication of digits
        }
        arm += mult;  //arm can store the mult and its addition

        temp = temp / 10;  //removes one digit
    }
    if (input==arm)
    {
        printf("Your input number %d is an armstrong number \n",input);
    }
    else{
        printf("Your input number %d is not an armstrong number\n ",input);
    }
    

    return 0;
}
//By only using do while

#include <stdio.h>

int main() {
    int input, countDigit = 0, temp, digit, arm = 0, mult;

    // Prompt user for input
    printf("Enter a number: \n");
    scanf("%d", &input);

    // Handle negative numbers (Armstrong numbers are non-negative)
    if (input < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    temp = input;

    // Counting the number of digits in the input using a do-while loop
    do {
        temp /= 10;
        countDigit++;
    } while (temp != 0);

    temp = input;

    // Calculating the Armstrong number sum using a do-while loop
    do {
        digit = temp % 10;  // extract the last digit
        mult = 1;  // reset multiplier for each digit

        // Calculate digit raised to the power of countDigit using a do-while loop
        int powerCount = countDigit;
        do {
            mult *= digit;  // multiply the digit by itself
            powerCount--;
        } while (powerCount > 0);

        arm += mult;  // add the result to the Armstrong sum
        temp /= 10;   // remove the last digit
    } while (temp != 0);

    // Checking if the number is an Armstrong number
    if (input == arm) {
        printf("Your input number %d is an Armstrong number.\n", input);
    } else {
        printf("Your input number %d is not an Armstrong number.\n", input);
    }

    return 0;
}

//By only using while loop

#include <stdio.h>

int main() {
    int input, countDigit = 0, temp, digit, arm = 0, mult;

    // Prompt user for input
    printf("Enter a number: \n");
    scanf("%d", &input);

    // Handle negative numbers (Armstrong numbers are non-negative)
    if (input < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    temp = input;

    // Counting the number of digits in the input using a while loop
    while (temp != 0) {
        temp /= 10;
        countDigit++;
    }

    temp = input;

    // Calculating the Armstrong number sum using a while loop
    while (temp != 0) {
        digit = temp % 10;  // extract the last digit
        mult = 1;  // reset multiplier for each digit

        // Calculate digit raised to the power of countDigit using a while loop
        int powerCount = countDigit;
        while (powerCount > 0) {
            mult *= digit;  // multiply the digit by itself
            powerCount--;
        }

        arm += mult;  // add the result to the Armstrong sum
        temp /= 10;   // remove the last digit
    }

    // Checking if the number is an Armstrong number
    if (input == arm) {
        printf("Your input number %d is an Armstrong number.\n", input);
    } else {
        printf("Your input number %d is not an Armstrong number.\n", input);
    }

    return 0;
}
