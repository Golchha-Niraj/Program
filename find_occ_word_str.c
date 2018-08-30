#include<stdio.h>

void count_occurance_word_str(char *str,char *search_word)
{
	int count=0;
	int index_current=0;
	int i=0;
	char temp[20]={'0'};
	unsigned int slen=strlen(str);
	for(i=0;i<=slen;i++)
	{
		if(str[i]==' '|| str[i]=='\0')
		{
			strncpy(temp,str+index_current,i-index_current);
			temp[i-index_current]='\0';
			index_current=i+1;

			if(strcmp(temp,search_word)==0)
			{	
				++count;
			}
		}
	}
	printf("String is \"%s\".\n",str);
	printf("%s word repeat %d times in string.\n",search_word,count);
}

main()
{
	char str[50]="Hello India my than my my";
	char search_word[30];
	printf("Enter Serching keyword:");
	gets(search_word);
	count_occurance_word_str(str,search_word);
}
