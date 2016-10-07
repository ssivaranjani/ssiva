#include <stdio.h>
#include<conio.h>
void main()
{
  int c, n, fact = 1;
  clrscr();
 printf("Enter a number to calculate it's factorial\n");
 scanf("%d", &n);
 if(n!=0)
 {
  for (c = 1; c <= n; c++)
  fact = fact * c;
 }
 else
 {
 fact=1;
 }
  printf("Factorial of %d = %d\n", n, fact);
 getch();
}
