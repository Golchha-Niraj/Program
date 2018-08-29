#include<stdio.h>

void count_occurance_word_str(char *str)
{
	int count=0;
	int index=0;
	int index_current=0;
	int i=0;
	int cmp_v=0;
	char temp[20]={'0'};
	char search_str[5]="my";
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			strncpy(temp,str+index_current,i-index_current);
			temp[i-index_current]='\0';
			index_current=i+1;
			printf("deb1\n");
			printf("index_current=%d\n",index_current);
			printf("i=%d, temp=%s\n",i,temp);

			if(strcmp(temp,search_str)==0)
			{	
				++count;
			}
		printf("cmp val is %d.\n",cmp_v);
		}
		printf("my rept word %d times.\n",count);
	}

}

main()
{
	char str[50]="Hello India my than my";
	count_occurance_word_str(str);
}
