//Write a menu driven program with the following options:
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//e. Exit

#include <stdio.h>
int main()
{
int m,x,y;

printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
printf("Enter number:-");
scanf("%d",&m);


switch(m)
 {
 case 1: printf("Enter number to perform addition");
           scanf("%d%d",&x,&y);
           printf("Addition is %d",x+y);
           break;

case 2: printf("Enter number to perform subtraction ");
          scanf("%d%d",&x,&y);
          printf("Subtraction is %d",x-y);
           break;

case 3: printf("Enter number to perform multiplication");
          scanf("%d%d",&x,&y);
          printf("Multiplication is %d",x*y);
           break;

case 4: printf("Enter number to perform division");
           scanf("%d%d",&x,&y);
           printf("Division is %d",x/y);
           break;

case 5: printf("Exit ");

           break;
}
return 0;
}
