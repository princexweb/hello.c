//Compound Interest
#include <stdio.h> 
#include <math.h> 

int main(){ 
float p; 
float r; 
float t; 
printf("enter the vlaue of principal ");
scanf ("%f",&p); 
printf("enter the vlaue of rate ");
scanf ("%f",&r); 
printf("enter the vlaue of time ");
scanf ("%f",&t); 

r=r/100; 
float amu = p*pow((1+r),t); 
float ci = amu-p; 
printf("%.2f",ci); 
return 0;
    
}