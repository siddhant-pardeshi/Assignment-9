#include <stdio.h>
int main()
{
int m;
printf("Enter number:-");
scanf("%d",&m);

switch(m)
 {
 case 1: printf("good");

           break;

case 2: printf("better");

           break;

case 3: printf("best");

           break;

default: printf("invalid");

           break;
}
return 0;
}
