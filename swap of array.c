#include<stdio.h>
int main()
{
int a[50],i,temp,n,j,l;
printf("enter a size of array");
	scanf("%d",&n);
printf("enter elements");
	for(i=0;i<n;++i)
	{
scanf("%d",&a[i]);
}
l=i;
j=l-1;
i=0;
	while(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
++i;
--j;
}
	for(i=0;i<n;++i)
	{
	printf("%d",a[i]);
	}
	return 0;
	}
	
	
