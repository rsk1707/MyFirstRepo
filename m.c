#include<stdio.h>
void main()
{
	int num;
	do
	{
		printf("Enter a positive number: ");
		scanf("%d",&num);
	}while(num<0);
	int factorial,i;
	for(i=1;i<=num;factorial*=i,i++);
	printf("%d! = %d\n",num,factorial);
}