//Program to Convert even number into its upper nearest odd number Switch Statement

#include<stdio.h>
int main()
{
int n;
printf("Enter a number");
scanf("%d",&n);

switch(n%2==0)
{
case 1: printf("%d",n+1);

case 0: printf("%d",n);
}
return 0;
}
