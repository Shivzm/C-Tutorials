#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

// Function to show the address of each character in the string
void show_address(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Address of '%c' is: %p\n", str[i], &str[i]);
    }
}

// Function to concatenate two strings without using strcat
void concat_without_strcat(char *str1, char *str2, char *result) {
    int i = 0, j = 0;

    // Copy first string into result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Append second string to result
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';  // Null-terminate the result
}

// Function to concatenate two strings using strcat
void concat_with_strcat(char *str1, char *str2, char *result) {
    strcpy(result, str1);
    strcat(result, str2);
}

// Function to compare two strings
int compare_strings(char *str1, char *str2) {
    return strcmp(str1, str2);
}

// Function to calculate the length of a string using pointers
int calculate_length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to convert all lowercase characters to uppercase
void to_uppercase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

// Function to convert all uppercase characters to lowercase
void to_lowercase(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

// Function to calculate the number of vowels in a string
int count_vowels(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

// Function to reverse the string
void reverse_string(char *str) {
    int length = calculate_length(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str1[MAX_LEN], str2[MAX_LEN], result[MAX_LEN];
    int choice;

    // Display menu
    do {
        printf("\nMenu:\n");
        printf("1. Show address of each character in string\n");
        printf("2. Concatenate two strings without using strcat\n");
        printf("3. Concatenate two strings using strcat\n");
        printf("4. Compare two strings\n");
        printf("5. Calculate length of the string (using pointers)\n");
        printf("6. Convert all lowercase characters to uppercase\n");
        printf("7. Convert all uppercase characters to lowercase\n");
        printf("8. Calculate number of vowels\n");
        printf("9. Reverse the string\n");
        printf("Enter your choice (1-9, 0 to exit): ");
        scanf("%d", &choice);
        getchar();  // To consume the newline character after entering choice

        switch (choice) {
            case 1:
                // Ask the user for a string and show addresses
                printf("Enter a string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the trailing newline character
                show_address(str1);
                break;
            case 2:
                // Concatenate two strings without using strcat
                printf("Enter first string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                printf("Enter second string: ");
                fgets(str2, MAX_LEN, stdin);
                str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character
                concat_without_strcat(str1, str2, result);
                printf("Concatenated string (without strcat): %s\n", result);
                break;
            case 3:
                // Concatenate two strings using strcat
                printf("Enter first string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                printf("Enter second string: ");
                fgets(str2, MAX_LEN, stdin);
                str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character
                concat_with_strcat(str1, str2, result);
                printf("Concatenated string (using strcat): %s\n", result);
                break;
            case 4:
                // Compare two strings
                printf("Enter first string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                printf("Enter second string: ");
                fgets(str2, MAX_LEN, stdin);
                str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character
                int comparison_result = compare_strings(str1, str2);
                if (comparison_result == 0) {
                    printf("The strings are equal.\n");
                } else if (comparison_result < 0) {
                    printf("First string is lexicographically smaller.\n");
                } else {
                    printf("First string is lexicographically larger.\n");
                }
                break;
            case 5:
                // Calculate the length of the string using pointers
                printf("Enter a string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                int length = calculate_length(str1);
                printf("Length of the string: %d\n", length);
                break;
            case 6:
                // Convert all lowercase characters to uppercase
                printf("Enter a string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                to_uppercase(str1);
                printf("String in uppercase: %s\n", str1);
                break;
            case 7:
                // Convert all uppercase characters to lowercase
                printf("Enter a string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                to_lowercase(str1);
                printf("String in lowercase: %s\n", str1);
                break;
            case 8:
                // Calculate number of vowels
                printf("Enter a string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                int vowels = count_vowels(str1);
                printf("Number of vowels: %d\n", vowels);
                break;
            case 9:
                // Reverse the string
                printf("Enter a string: ");
                fgets(str1, MAX_LEN, stdin);
                str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character
                reverse_string(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 0 and 9.\n");
        }
    } while (choice != 0);

    return 0;
}
