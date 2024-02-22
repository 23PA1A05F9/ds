#include<stdio.h>

void readarr(int a[],n) 
{
int I;
  for(I=0;I<n;++I) {
scanf("%d",&a[I]);
}
}
void printarr(int a[],int n) 
{
int I;
  for(I=0;I<n;++I) {
printf("%d  ",a[I]);
}
 }
void swap(int *x,int *y) 
{
int temp;
temp=*x;
*x=*y;
*y=temp;

   }
int main() 
{
int n,i,j,midi,a[100];
 printf("ente");
 scanf("%d",&n);
printf("e e");
 readarr(a,n);
   for(i=0;i<n-1;i++) 
{
midi=i;
  for(j=i+1;j<n;j++) 
  {
 if(a[j]<a[midi]) 
   midi=j;
}
 if(a[midi]!=i)
   swap(&a[midi],&a[i]);
 }


 printarr(a,n);
return 0;
 }

