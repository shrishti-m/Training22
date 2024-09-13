#include<stdio.h>
#include<string.h>

int main()
{
/*
	char str[] = "Hello world!";
	char *ptr = strchr(str, 'w');
	if(ptr != NULL)
		printf("Found 'w' at position: %ld\n", ptr - str);
	else
		printf("'w' not found\n");
	return 0;
*/
	/*
    //strrchr() - search last occurance 
	char str[] = "Hello world!w";
    char *ptr = strrchr(str, 'w');
    if(ptr != NULL)
         printf("Found 'w' at position: %ld\n", ptr - str);
    else
         printf("'w' not found\n");
    return 0;
	*/

	//strstr() - locate a substring 
	char str[] = "Hello world! world";
    char *ptr = strstr(str, "world");
    if(ptr != NULL)
        printf("Found 'world' at position: %ld\n", ptr - str);
    else
        printf("'world' not found\n");
    return 0;

}
