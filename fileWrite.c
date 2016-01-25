#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE * CHECK = fopen("someFile.txt", "r");
	if(CHECK)//seeing if file already exists
	{
		printf("warning, file already exists\n...over writing\n");
	}
	fclose(CHECK);
	
	FILE * WRITE_FILE = fopen("someFile.txt", "w");
	if(!WRITE_FILE)//check handle okay
	{
		printf("failed to open/create file\n");
	}
	else//writing 
	{
	
		
	}
}
