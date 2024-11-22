//linear search

#include <stdio.h>

int main(){
    int arr[] = {23,34,23,13,56,9,20};
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]==13)
        {
            printf("Found in %d iteration\n ",i+1);
            break;
        }

    }

}
