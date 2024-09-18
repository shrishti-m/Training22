#include<stdio.h>

int main(){
	FILE *fp = NULL;
	fp = fopen("test.txt","r");
	int ret_val = 0;
	int num;
	if(fp == NULL){
		printf("fopen() failed\n");
	
	ret_val = fclose(fp);
	if(ret_val != 0)
    {
        printf("fclose failed\n");
        return 1;
    }

		return 1;
	}

	ret_val = fscanf(fp, "%d", &num);
	if(ret_val == EOF) //if fscanf fails
	{
		printf("fscanf failure\n");
		return 1; //before returning close the file
	}
	
	printf("The num is %d\n", num);
	
	//for closing
	ret_val = fclose(fp);

	if(ret_val != 0)
	{
		printf("fclose failed\n");
		return 1;
	}

	return 0;
}

