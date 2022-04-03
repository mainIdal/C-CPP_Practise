#include <stdio.h>

int main(void)
{
    int counter,words=1,letters=0;
    char i;
    char str[100];
    printf("Enter a sentence(put a dot when it finished.): ");
    gets(str);
    for(i=str[counter=0];i!='.';counter++)
    {
       if(str[counter]==' ')
            words++;
       if(str[counter] != ' ' && str[counter] != '-' && str[counter] != '_' && str[counter] != '*' && str[counter] != '+' && str[counter] != '/')
            letters++;
       i=str[counter+1];
    }
    printf("Number of words: %d\n",words);
    printf("Number of letters: %d", letters);
    return 0;
}
