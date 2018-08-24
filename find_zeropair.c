#include<stdio.h>

void find_max_elem(unsigned int *count_arr)
{
	int i=0;
	int max=count_arr[0];
	for(i=0;i<20;i++)
	{
		if(max<count_arr[i])
		{
			max=count_arr[i];
		}
	}
	printf("zero max pair =%d.\n",max);
}

void zeropair_dis_maxpair(char *str)
{
	int i=0,j=0;
	int count=0;
	unsigned count_arr[20]={0};
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==0)
		{
			//	count_arr[j++]=++count;
		}
		if(str[i]=='0' && str[i+1]=='0')
		{
			count_arr[j]=++count+1;
			//			printf("deb1\n");
		}
		else
		{	
			j++;
			count=0;
		}		
		//	printf("deb2\n");
	}

	//	for(i=0;i<20;i++)
	//		printf("%d ",count_arr[i]);
	find_max_elem(count_arr);
}

main()
{
	char str[20]="100245005065000000";
	zeropair_dis_maxpair(str);
}
