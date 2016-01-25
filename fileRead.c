#include <stdio.h>
#include <string.h>

FILE *READ_FILE;//uses pointer for file handle

int main(void)
{
	READ_FILE = fopen("someLines.txt", "r");
	
	if(!READ_FILE)
	{
		printf("could not open: someLines.txt\n"); 
		return 1;
	}
	
	///char by char
	char NextChar;
	int  Count = 0;
	while(1)
	{
		NextChar = fgetc(READ_FILE);// read single character
		
		if(NextChar != EOF)
			{
			putc(NextChar, stdout);
			Count ++;
			}
		else
			{break;}
	}
	printf("printed %d characters\n", Count);
	fclose(READ_FILE);
	
	
	///read to array and reverse
	FILE *READ_FILE = fopen("someLines.txt", "r");
	char Line[81];///////////////////////////////////////////////////////////trying to use a pointer causes seg fault
	
	if(!READ_FILE)
	{
		printf("could not read file\n");
 	}
	else
	{		
		while(fgets(Line, 80, READ_FILE) != NULL)//fgets(string, num chars to read, source)
		{
			printf("original line is:\n%s", Line);
			
			printf("reversed line is:\n");
			int i;
			for(i = strlen(Line) - 2/*to skip \n*/; i >= 0; i--)
			{
				putc(Line[i], stdout);
			}
			printf("\n");
		}
	
		fclose(READ_FILE);
	}
	
	return 0;//main return
}
