#include <stdio.h>
//Swap Two Numbers
//Take two integers a & b from user and print the values after swap their values
int main(){
    int a;
    int b;
    printf("enter the vlaue of a ");
    scanf("%d",&a);
    printf("enter the vlaue of b ");
    scanf("%d",&b);
    // int c = a;
    // a=b;
    // b=c;
    // printf("the value of a is %d \n",a);
    // printf("the value of b is %d",b);
    
    //second method
    int sum = a+b;
    a = sum - a;
    b = sum - b;
    printf("the value of a is %d \n",a);
    printf("the value of b is %d",b);
    
    return 0;
}