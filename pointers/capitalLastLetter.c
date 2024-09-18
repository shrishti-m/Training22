//WAP to input a sentence and capitalize last letter in each word.

#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

void capital(char* str){
    int i=0;
    int lastletter = -1;
    
    while(str[i] != '\0'){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'){
            // If a space or tab is found, capitalize the last letter of the previous word
            if(lastletter != -1){
                str[lastletter] = toupper(str[lastletter]);
                lastletter = -1;
            }
            
        }
        else{
            // Update the lastIndex to the current character
            lastletter = i;
        }
        i++;
    }
    
    if (lastletter != -1) {
        // Capitalize the last letter of the last word if there is no trailing space
        str[lastletter] = toupper(str[lastletter]);
    }
}

int main()
{
    char input[MAX];
    
    printf("Enter a sentence: ");
   
    if (fgets(input, MAX, stdin) != NULL) {
        
        size_t length = strlen(input);
        if (length > 0 && input[length - 1] == '\n') {
            input[length - 1] = '\0';
        }

        
        capital(input);
      
        printf("Modified sentence: %s\n", input);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}

