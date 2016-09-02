#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the number");
scanf("%d",&n);
if(n>0)
printf("positive\n");
else if(n<0)
printf("negative\n");
else
printf("zero\n");
getch();
}
