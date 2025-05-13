// Calculate Power of a Number
//a ki power b
#include <stdio.h>
#include <math.h>
 int main(){
    double a;
    double b;
    printf("enter the value of a :");
    scanf("%lf",&a);
    printf("enter the value of b that work as power :");
    scanf("%lf",&b);
    printf("%.0lf",pow(a,b));
    return 0;
 }