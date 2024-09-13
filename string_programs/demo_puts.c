#include<stdio.h>
#include<string.h>
#define MAX 5

int main()
{
	char ch[MAX];
	int len;
	printf("Enter a string\n");
	if(fgets(ch, MAX, stdin) != NULL){
	len = strlen(ch);
	if(ch[len-1] == '\n'); //these 11,12,13 lines are compulsory if you write fgets 
		ch[len-1] = '\0';
	
	printf("%s\n", ch);
	if(!fputs(ch, stdout)){
		printf("Error in fputs\n")l
		return 2;
	}
	return 0;
	}

	else {
		printf("Error in fgets\n");
		return 1;
	}
}

