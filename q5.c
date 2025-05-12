#include <stdio.h>
int main(){
    // q6.  Print Message
    // Take name and age of user as input and print them with following message.
    char name [50];
    printf("enter your name ");
    scanf("%s",name);
    int age;
    printf(" enter your age ");
    scanf("%d",&age);
    printf("Hello \"%s\", your age is %d  ",name,age);

    return 0;
}