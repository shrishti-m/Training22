#include<stdio.h>
#include<string.h>
#define MAX 15
int main()
{
	char str[] = "hello world";
	char copystr[MAX];
	int len;
	
	//printf("Enter a string:\n");
	//fgets(str, MAX, stdin);
	//len = strlen(str);
	//if(str[len-1] == '\n')
	//	str[len-1] = '\0';
	printf("Original string\n");
	
	puts(str);

	strncpy(copystr, str, MAX);
	copystr[MAX-1] = '\0';
    printf("Original string\n");

    puts(str);

	printf("Copied String \n");
	puts(copystr);

	printf("\n\n");
	return 0;
}
