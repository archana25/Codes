
#include<stdio.h>
#include<string.h>


int reverse_string(char *string)
{
	
	if(strlen(string) == 0)
		return 0;
	reverse_string(string+1);
	printf("%c",string[0]);

		
}



int main(void)
{
	char *string = "ABCDEFGH";
	printf("%s\n",string);
	reverse_string(string);
	


}

