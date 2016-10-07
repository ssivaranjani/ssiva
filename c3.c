#include<stdio.h>
#include<conio.h>
void main()
{
int num,r,reverse=0;
clrscr();
printf("Enter any number:");
while(num!=0)
{
r=num%10;
reverse=reverse*10+r;
num=num/10;
}
printf("%d",reverse);
getch();
}
