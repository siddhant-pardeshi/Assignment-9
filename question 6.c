//Program to check whether a year is a leap year or not. Using switch statement

#include <stdio.h>
int main()
{
int m;
printf("Enter year number:-");
scanf("%d",&m);

switch(m%100==0)
 {
 case 0:
        switch(m%4==0)
        {
        case 0:printf("not a leap year");
               break;
        case 1:printf("leap year");
                break;
        }
        break;
case 1: switch(m%400==0)
        {
        case 0:printf("not a leap year");
               break;
        case 1:printf("leap year");
                break;
        }
        break;
}
return 0;
}
