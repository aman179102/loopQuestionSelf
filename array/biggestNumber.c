#include <stdio.h>

int main()
{
    int n, i, max;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize the maximum value to the first element
    max = arr[0];

    // Iterate through the array to find the maximum
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Output the maximum value
    printf("The greatest number in the array is: %d\n", max);

    return 0;
}
