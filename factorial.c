//WAP to calculate factorial of any number

#include <stdio.h>

int main()
{
    int input, temp = 1, n = 1, t;
    printf("Enter a number\n");
    scanf("%d", &input);
    if (input == 1 || input == 0)
    {
        printf("1");
    }
    else
    {
        t = input;
        while (n <= input)
        {
            temp *= t;
            t--;
            n++;
        }
        printf("Factorial is %d\n", temp);
    }
}
