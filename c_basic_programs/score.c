#include<stdio.h>

int main()
{
   	int score;
	char grade;

	printf("Enter the score:\n");
	scanf("%d", &score);
	
	printf("Enter the student grade :\n");
	scanf(" %c", &grade);    //space before %c is there because %c will read \n that was added to input buffer so to clear this buffer space is given 

	printf("Your score is %d and grade is %c\n", score, grade);
	return 0;

}


