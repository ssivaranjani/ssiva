#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp=0;
clrscr();
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the element one by one:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("after arrange\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}
