#include <stdio.h>
//Positive, Negative, or Zero
//Take three numbers as input from the user. For each number, check if it is
//positive, negative, or zero, and print the result.
int main(){
    int a;
    printf("enter first no to check :");
    scanf("%d",&a);
    if (a>0){
        printf("positive");
    }
    else if (a==0){
        printf("zero");
    }
    else{
        printf("negative");
        
    }
     return 0;
}