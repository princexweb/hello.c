//Area and Circumference of Circle
//Take radius of circle from user. Calculate and print the area and
//circumference till two decimal place
#include <stdio.h>
#include <math.h>
// we use double  data type and lf as formate oidentyfire
int main(){
    double r;
    printf("enter radius :");
    scanf("%lf",&r);
    //area of a circle
    printf("Area: %.2f,\n",M_PI*pow(r,2));
    //circumference 
    printf(" Perimeter: %.2f",2*M_PI*r);
    return 0;
}