#include<stdio.h>

int main(){
	FILE *fp = NULL;
	fp = fopen("test.txt","w");
	int ret_val = 0;
	int num;
	if(fp == NULL){
		printf("fopen() failed\n");


	ret_val = fprintf(fp, "the first num is %d\n 2nd num is %d\n", 10, 20);
	if(ret_val < 0)
	{
		printf("fprintf failed\n");
		
		ret_val = fclose(fp);
		if(ret_val != 0){
			printf("fclose failed\n");
			return 1;
		}
		return 0;
	}




	ret_val = fclose(fp);
	if(ret_val != 0)
    {
        printf("fclose failed\n");
        return 1;
    }

		return 0;
	}

	

	return 0;
}


