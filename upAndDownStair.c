#include <stdio.h>

int main(){
    int row;
    int column;
    scanf("%d",&row);
    scanf("%d",&column);
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for (int m = column-1; m > 0 ; m--)
    {
        for (int k = m; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}
