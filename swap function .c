#include<stdio.h>
void swap(int a[],int n)
{
int j,i,temp,l;
l=n-1;
i=0;
j=l;
	while(j>i)
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
}

int main()
{
int i,n,a[50];
 printf("enter the size of array");
scanf("%d",&n);
 printf("enter the elemente");
	for(i=0;i<n;++i)
  {
scanf("%d",&a[i]);
  }
  swap(a,n);
return 0;
}
