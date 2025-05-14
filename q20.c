// Student Grade Calculator
/*Calculate and display the student’s grade based on their percentage
using predefined grading criteria.

Below 35%: Grade F

Below 45%: Grade E

Below 60%: Grade D

Below 75%: Grade C

Below 90%: Grade B

Above 90%: Grade A*/
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter marks : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    float sum = (a+b+c+d)/4.0;//use flote value for devision
    if (sum<35)
    {
        printf("your parsentage is %.2f your grade is F",sum);
    }else if (sum<45)
    {
        printf("your parsentage is %.2f your grade is e",sum);
    }else if (sum<60)
    {
        printf("your parsentage is %.2f your grade is d",sum);
    }else if (sum<75)
    {
        printf("your parsentage is %.2f your grade is c",sum);
    }else if (sum<90){
        printf("your parsentage is %.2f your grade is b",sum);
    }
    else{
        printf("your parsentage is %.2f your grade is a",sum);
    }
    return 0;
}