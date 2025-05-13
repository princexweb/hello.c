//  Check if Two Numbers are Equal
// Take two numbers from user. Check if they are equal or not, if equal print
//Equal else Not Equal
#include <stdio.h>

int main(){
    int a;
    int b;
    printf("enter the value : ");
    scanf("%d",&a);
    printf("enter the value : ");
    scanf("%d",&b);
    if (a==b){
        printf("equal");
    }
    else{
        printf("not qual");
    }

    return 0;
}