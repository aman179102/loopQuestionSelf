#include <stdio.h>

int main()
{
    int i, j, k, sp;


    for (i = 0; i <= 6; i++)
    {
        for (j = 65; j <= 71 - i; j++) 
        {
            printf("%c", j);
            printf(" ");
        }

        for (sp = 1; sp <= i * 4 - 2; sp++)
        {
            printf(" ");
        }

        for (k = 71 - i; k >= 65; k--) 
        {
            if(k==71);
            else
            {
            printf("%c", k);
            printf(" ");
            }
        }
        printf("\n");
    }
}
