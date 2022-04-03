#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int i,j,space,n;
	printf("Enter a sentence: ");
	gets(str);
	n = strlen(str);
	for(i=0;i<n;i++)
	{
		space=0;
		if(str[i] == '\t')
			for(j=i;str[j] == '\t';j++)   	
				str[j] = ' ';
			//This loop converts a tab character to a white space character.
		if(str[i] == ' ')
			for(j=i;str[j]==' ' || str[j]=='\t';j++)  
				space++;
			//this loop counts number of white space(s) and also tab character(s) which is after white space character.	
		if(space>1)
			strcpy(&str[i+1],&str[i+space]);
			//This statement remove all extra blanks (white spaces and tab) between the words.
	}	
	printf("New sentence: %s", str);
	return 0;
}
