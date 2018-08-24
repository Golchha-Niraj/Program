#include<stdio.h>

void test_fun(int i,int j,int k)
{
	printf("i=%d j=%d k=%d\n",i,j,k);
}

main()
{
	int m=2;
	test_fun(--m,m,m--);
}
