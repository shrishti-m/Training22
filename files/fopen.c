#include<stdio.h>

int main()
{
	FILE *input, *output;

	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");

	//perform error handing for both input and output

	int ret_val;

	ret_val = copy_file(input,output);
	if(ret_val != 0)
	{
		printf("copy failes\n");
		fclose(input);
		//TO DO : error handling for fclose input, output 
		fclose(output);
		return 1;
	}
	//TO DO : error handling for fclose input, output
	fclose(input);
	fclose(output);

	return 0;
}

int copy_file(FILE *input, FILE *output)
{
	//read from input and write to output
	char file_char = '\0';
	
	while(1)
	{
		//if you are not in end of file do this
		//non zero means it reached the end of file
		if(!feof(input!=0))
		{
			break;
		}
		file_char = (char)fgetc(input);

		if(file_char == EOF){
			printf("fgetc failed\n");
			return 1;
		}


		fputc(file_char, output);
	
	}
	return 0;
}
