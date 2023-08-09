#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i;
	printf("enter the elements of array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered array elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
