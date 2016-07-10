#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],x,i,j,temp=0;
clrscr();
printf("Enter the size of array\n");
scanf("%d",&x);
printf("Enter the element one by one:\n");
for(i=0;i<x;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
for(j=i+1;j<x;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("after arrange\n");
for(i=0;i<x;i++)
printf("%d\t",a[i]);
getch();
}
