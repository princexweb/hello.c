#include <stdio.h>
//Check Even or Odd
int main(){
    int a;
    printf("enter the value to check ");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even number",a);
    }
    else{
        printf("%d is not a even number",a);
    }
    return 0;
}