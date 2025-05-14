//Vowel or Consonant
//Accept a character from user and check if it is a vowel or a consonant.
//Print the result
#include <stdio.h>
#include <ctype.h>

int main() {
   char alpha;
   scanf(" %c",&alpha);
   if(alpha == 'a' || alpha == 'A' || alpha == 'e' || alpha == 'E' || alpha == 'i' || alpha == 'I' || alpha == 'o' || alpha == 'O' || alpha == 'u' || alpha == 'U' ){
       printf("Vowel");
   }
   else{
    printf("Consonant");
   }
   
    return 0;
}