#include <stdio.h>

int main(){
    int input,a,b,c;
    printf("Enter three digits number:\n");
    scanf("%d",&input);
    a = input%10;
    b= (input/10)%10;
    c = (input/10)/10;
    if (a*a*a+b*b*b+c*c*c==input)
    {
        printf("It is an armstrong number\n");
    }else{
        printf("It is not an armstrong number\n");
    }
 // exampless of armstrong numbers :--->  153,370,371,407   
}
