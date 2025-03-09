# include<stdio.h>
# include<string.h>

int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);
int countVowels(char str[]);
void checkChar(char str[], char ch);
void printTable(int n);

int main() {
    printTable(5);
      return 0;

}

void printTable(int n) {
    for(int i=1; i<=10; i++) {
        printf("%d * %d = %d\n", n, i, n*i);
    }
}


int main() {
   char str[] = "Palindrome";
   printf(" vowels are: %d", countVowels(str));
   return 0;
}

void checkChar(char str[], char ch) {
     for(int i=0; str[i] != '\0'; i++) {
         if(str[i] == ch) {
            printf("Character is present");
         }
     }
        
}

int countVowels(char str[]) {
   int count= 0;
       for(int i=0; str[i] != '\0'; i++) {
           if(str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u') {
            count++;
           }
   }
   return count;
}







void slice(char str[], int n, int m) {
     char newStr[100];
     int j=0;
     for(int i=n; i<=m; i++, j++) {
        newStr[j] = str[i];
     }
     newStr[j] = '\0';
     puts(newStr);
}

int countLength(char arr[]) {
     int count=0;
     for(int i=0; arr[i] != '\0'; i++){ 
         count++;
   }
   return count-1;
}

void salting(char password[]) {
     char salt[] = "123";
     char newPass[200];
     strcpy(newPass,password);
     strcat(newPass,salt);
     puts(newPass); 
}