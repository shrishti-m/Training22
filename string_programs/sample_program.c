#include<stdio.h>

#define MAX 50
int main()
{
 	char ch[MAX];
	//char str[MAX];
	printf("Enter a string\n");
	scanf("%[^\n]s", ch); //for reading the whole sentence
	//scanf("%s", str);
	printf("%s\n", ch);
	printf("\n");

	return 0;
}
