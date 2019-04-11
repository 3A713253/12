#include <stdio.h>
#include <stdlib.h>
int main()
{	int num,a,b,c,d=0;
	printf("請輸入一個數值:");
	scanf("%d",&num);
	c=(num-1)/2;
	for(a=1;a<=num;a++){printf("*");}
	printf("\n");
	d=num-1;
	for(b=1;b<=(num-2);b++)
	{
		for(a=1;a<=b;a++){printf(" ");}
		for(a=1;a<=d;a++){printf("*");}
		c--;d-=1;printf("\n");
	}
	
	system("pause");
}
