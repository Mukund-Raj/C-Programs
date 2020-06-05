#include<stdio.h>

void fun(int *p)
{
	*p[2]=23;
}
while()
{
	*arr++;
}

int main()
{
	//address 100
	int x[] = {1,2,3};
	
	int *p = &x;//100
	
	fun(&x);//100
	
	int i;
	
	for(i=0;i<3;++i)	
	{
		printf("%d ",x[i]);	
	}
	
}
