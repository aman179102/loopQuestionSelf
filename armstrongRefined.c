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
