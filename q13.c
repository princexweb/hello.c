//Find Greater Number
//Take two numbers from user. Find the greater number and print the
//greater number
#include <stdio.h>
int main(){
    int a;
    int b;
    printf("enter the value : ");
    scanf("%d",&a);
    printf("enter the value : ");
    scanf("%d",&b);
    if (a>b){
        printf("%d is grater then %d",a,b);
    }
    else if (a==b)
    {
        printf("%d is  equal to %d",a,b);
    }
    
    else{
      printf("%d is grater then %d",b,a);
    }
    return 0;
}