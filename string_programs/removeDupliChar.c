//WAP to input a word and delete adjacent duplicate character.

#include <stdio.h>
#include <string.h>

void Duplicates(char *str) {
    int i, j = 0;
    int length = strlen(str);
    
    if (length == 0) return;  

    for (i = 0; i < length; i++) {
        // If the current character is not the same as the last character in the result
        if (j == 0 || str[i] != str[j - 1]) {
            str[j++] = str[i];  // Add character to the result
        }
    }
    
    str[j] = '\0';  // Null-terminate the result
}

int main() {
    char word[100];  

    printf("Enter a word: ");
   
    if (fgets(word, sizeof(word), stdin) != NULL) {
        
        size_t length = strlen(word);
        if (length > 0 && word[length - 1] == '\n') {
            word[length - 1] = '\0';
        }
        Duplicates(word);

        printf("Word after removing adjacent duplicates: %s\n", word);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}

