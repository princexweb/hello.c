//Largest of Three
/*Take three numbers as input from the user. Find the largest among them
and print the largest one.*/
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first value :");
    scanf("%d",&a);
    printf("enter seconf value :");
    scanf("%d",&b);
    printf("enter third value :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d",a);
    }
    else if (b>a&&b>c)
    {
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}
