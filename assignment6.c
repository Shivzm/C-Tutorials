#include <stdio.h>
#include <string.h>

void reverse(char str[]);
int Palindrome(char str[]);

int main() {
         char word[500];
         printf("Enter a word(in BLOCK LETTERS) :");
         //fgets(word, 500, stdin);
         scanf("%s",&word);
         // Remove the newline character added by fgets
         //word[strcspn(word, "\n")] = '\0';

         if(Palindrome(word)) {
             printf("%s is a palindrome :)\n",word);
            }
         else {
         printf("%s is not a palindrome:(\n",word);
         }
    return 0;
}

void reverse(char str[]) {
         int length = strlen(str);
         char t;
         for(int i=0; i<length/2; i++) {
             t = str[i];
             str[i] = str[length-i-1];
             str[length-i-1]= t;
      }
}

int Palindrome(char str[]) {
         char original[500];
         strcpy(original, str);
         reverse(str);
     
         if(strcmp(original,str) == 0) {
         return 1;
         }
         else {
         return 0;
         }
}