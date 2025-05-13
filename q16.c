//  Valid Voter
/*Accept the name and age of user as input. If the user is 18 or older, print:
‘Hello [Name], you are eligible to vote.’ Otherwise, print: ‘Hello [Name],
you will be eligible to vote in (18 - age) years.*/
#include <stdio.h>
int main(){
    char name [40];
    int age;
    printf("enter your name : ");
    scanf("%s",name);
    printf("enter your age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("hello %s you are a valid voter",name);
    }
    else if (age>0)
    {
        printf("hello %s u can elagible for vote after %d",name,(18-age));
    
    }
    
    else{
        printf("enter a valid age");
    }
    return 0;
}


