#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[70];
	int i;
	printf("Please, enter a sentence: ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if((int)str[i] > 64 && (int)str[i] < 91)
		str[i] = (int)str[i] + 32;
	}
	printf("New sentence: ");
	puts(str);
	return 0;
}
