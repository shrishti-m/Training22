//Write a program to check if two strings are anagrams of each other.

#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100

void Sortstring(char* str)
{
	int n = strlen(str);
	for(int i=0; i<n-1; i++){
         for(int j=i+1; j<n; j++){
             if(str[i]>str[j]){
                 char temp = str[i];
                 str[i] = str[j];
                 str[j] = temp;
             }
         }
     }
}
int anagramSort(char *str1, char *str2){
    int n = strlen(str1);
    int m = strlen(str2);
    
    if(n!=m) return 0;
    
	Sortstring(str1);
	Sortstring(str2);

    for(int i=0; i<n; i++){
        if(str1[i] != str2[i]){
            return 0;
        }
    }
    return 1;
    
}

int main()
{
    
    char str1[MAX], str2[MAX];
    
    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1),stdin);
	str1[strcspn(str1, "\n")] = '\0'; // Remove newline character if present

    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character if present

    //convert both the string to lower case
    for(int i=0;i<str1[i];i++){
        str1[i] = tolower((unsigned char)str1[i]);
    }
    
    for(int i=0;i<str2[i];i++){
        str2[i] = tolower((unsigned char)str2[i]);
    }
   
    if(anagramSort(str1, str2)){
        printf("Strings are anagrams\n");
    }
    else printf("Strings are not anagrams\n");
    

    return 0;
}
