//Leap Year
#include <stdio.h>
int main(){
    int year ;
    printf("enter a year :");
    scanf("%d",&year);
    if(year%400==0)
    printf("the year %d is leep year",year);
    else if (year%100==0)
    {
        printf("%d is not a leep year",year);
    }
    else if (year%4==0)
    {
        printf("%d is a leep year",year);
    }
    
    else{
        printf("%d is not a leap year",year);
    }
    

    return 0;
}