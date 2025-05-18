/*Write a program to calculate the salary of an employee based on their
gender, years of service, and qualification using the criteria provided
below.*/
#include <stdio.h>
#include <string.h>

int main() {
    char gen;
    int yof;
    char qule;
    printf("you are m/f : "); 
    scanf(" %c",gen);
    printf("year of experince : ");
    scanf(" %d",&yof);
    printf("your qulefication p/g : ");
    scanf(" %c",qule);
    
    if (gen == 'm'){
        if(yof>=10){
            if (qule == 'p')
            {
                printf("15000");
            }else{
                printf("10000");
            }
        }else{
            if (qule == 'g')
            {
                printf("10000");
            }else{
                printf("7000");
            }
        }

    }else{
         if(yof>=10){
            if (qule == 'p')
            {
                printf("12000");
            }else{
                printf("90000");
            }
        }else{
            if (qule == 'g')
            {
                printf("9000");
            }else{
                printf("6000");
            }
        }

    }
    return 0;
}
