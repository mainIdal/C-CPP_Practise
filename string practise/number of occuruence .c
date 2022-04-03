#include <stdio.h>
#include <stdlib.h>

int is_within(char arr[],char ch);

int main(void)
{
	char str[100];
	char ch;
	int flag;
	printf("Enter a string: ");
	gets(str);
	printf("Enter a charachter: ");
	scanf("%c",&ch);
	flag=is_within(str,ch);
	if(flag==0)
		printf("%c not found in '%s'",ch,str);
	else
		printf("%c occurs %d times in '%s'",ch,flag,str);
		
	return 0;	
}
int is_within(char arr[],char ch)
{
	int i,occurence=0;
	for(i=0;arr[i] != '\0';i++)
		if(arr[i] == ch)
			occurence++;
			
	return occurence;
}
