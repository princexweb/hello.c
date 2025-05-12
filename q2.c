#include <stdio.h>

int main(){
    //Take two integers a & b with some constant values. Perform arithmetic operations (+, -, *, /) and print with the appropriate message.
    int a;
    int b;
    printf("enter the vlaue of a ");
    scanf("%d",&a);
    printf("enter the vlaue of b ");
    scanf("%d",&b);
    printf("sum of %d & %d is %d \n",a,b,a+b);
    printf("substraction of %d & %d is %d \n",a,b,a-b);
    printf("product of %d & %d is %d \n",a,b,a*b);
    printf("devision of %d & %d is %d \n",a,b,a/b);

    return 0;
}