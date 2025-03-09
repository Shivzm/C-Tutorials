#include<stdio.h> 
#include<ctype.h>

// checking how many times an alphabet was used in the command line arguments

#define ALPHABET_COUNT 26

void count_alphabets(char *text, int *alphabet_count) {
    for(int i=0; text[i] != '\0'; i++) {
        char ch = text[i];
        if(isalpha(ch)) {
            ch = tolower(ch);
            alphabet_count[ch - 'a']++;
        }
    }
}

void print_table(int *alphabet_count) {

    printf("Alphabet\tOccurences\n");
    printf("---------------------------\n");

    for(char  ch = 'a'; ch <= 'z'; ch++) {
        printf("  %c\t\t  %d\n", ch, alphabet_count[ch - 'a']);
    }
}


int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("Please provide text as a command line argumnent.\n");
        return 1;
    }

    int alphabet_count[ALPHABET_COUNT] = {0};
    for(int i =1; i < argc; i++) {
        count_alphabets(argv[i], alphabet_count);
    }

    print_table(alphabet_count);

    return 0;
}