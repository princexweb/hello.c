//Area and Perimeter of Rectangle
//Take length and breadth of rectangle from user. Calculate and print the
//area and perimeter.
#include <stdio.h>
int main(){
    int l;
    int b;
    printf("enter length of rectangle");
    scanf("%d",&l);
    printf("enter breadth of rectangle");
    scanf("%d",&b);
    int area =l*b;
    printf("%d\n",area);
    int pera = 2*(l+b);
    printf("%d",pera);
    return 0;
}