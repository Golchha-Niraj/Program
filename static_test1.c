#include<stdio.h>

main()
{
	int m=0;
	for(m=0;m<5;m++)
	{
		static int i=0;
		printf("%d ",i);
		i++;
	}
}
