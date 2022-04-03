#include <stdio.h>
#include <string.h>

void findCommon(char arr1[],char arr2[],char common[],int size1,int size2,int *size);

int main(void)
{
	char str[70],str1[70],common[70],same_common[70];
	int i,j,new_size,index=0;
	printf("Please, enter a name: ");
	gets(str);
	printf("Please, enter a name: ");
	gets(str1);
	findCommon(str,str1,common,strlen(str),strlen(str1),&new_size);
	printf("Common characters: ");
	for(i=0;i<new_size-1;i++)
	{
		for(j=i+1;j<new_size;j++)
		   if(common[j] == common[i]){
			 same_common[index]=common[j];
			 index++; }	
	}
	for(i=0;i<new_size;i++)
	{
		printf("%c ",common[i]);
	}
	printf("\nSame common characters: ");
	for(i=0;i<index+1;i++)
	{
		printf("%c ", same_common[i]);
	}
	return 0;
}

void findCommon(char arr1[],char arr2[],char common[],int size1,int size2,int *size)
{
	int foo,bar,index=0;
	for(foo=0;foo<size1;foo++)
		for(bar=0;bar<size2;bar++)
			if(arr1[foo] == arr2[bar] )
			{
			common[index] = arr2[bar];
			index++;
			}
	*size= index+1;
}


