//Convert Hours to Minutes
//Take number of hours from user. Convert it into minutes and print them in
//console with message
#include <stdio.h>

int main() {
    int h;
    scanf("%d",&h);
    int m = 60*h;
    printf("%d minutes",m);

    return 0;
}