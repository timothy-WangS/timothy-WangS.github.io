#include<stdio.h>
#include<string.h> 
int main()
{
	int i;
	int a[10];
	memset(&a,64,sizeof(a));
	for(i=0;i<10;i++)
	{
		printf("%c ",a[i]);
	}
	return 0;
}


