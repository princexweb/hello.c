// Movie Status
/*Write a program that accepts the rating of a movie as a double and the
movie name as a String. Based on the rating, determine and print the
category of the movie*/
#include <stdio.h>
int main(){
    double r;
    char m[90];
    printf("enter movie rating");
    scanf("%lf",&r);
    printf("enter movie name");
    scanf("%s",m);
    if(r<=2.0 && r>0){ 
        printf("%s is flop",m);
    }else if (r<3.5 && r>2.1)
    {
        printf("%s is samin hit",m);
    }else if (r<4.4 && r>3.5){
        printf("%s is hit",m);
    }else if (r<5.0 && r>4.5)
    {
        printf("%s is super hit",m);
    }
    
    
    
    return 0;
}