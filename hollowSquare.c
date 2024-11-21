#include <stdio.h>
//Hollow Square
int main(){
    int row;
    int column;
    scanf("%d",&row);
    scanf("%d",&column);
    for (int i = 1; i <= column; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j>1 && j<row && i>1 && i<row)
            {
                printf(" ");
            }
            else{
                printf("*");
            }
            
        }
        printf("\n");
    }
    
}
