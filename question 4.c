//Write a menu driven program with the following options:
//a. Check whether a given set of three numbers are lengths of an isosceles
//triangle or not
//b. Check whether a given set of three numbers are lengths of sides of a right
//angled triangle or not
//c. Check whether a given set of three numbers are equilateral triangle or not
//d. Exit

#include <stdio.h>
int main()
{
int m,x,y,z;

printf("Program to check Type of triangle\n1.To check isoceles triangle\n2.to check right angled triangle\n3.to check equilateral triangle\n4.Exit");
scanf("%d",&m);



switch(m)
 {
 case 1: printf("Enter the length of sides of triangle:-");
         scanf("%d %d %d",&x,&y,&z);
         if (x==y || y==z || z==x)
           printf("Given triangle is an isoceles triangle");
          else
          printf("Given triangle is not an isoceles triangle");
           break;

case 2: printf("Enter the length of sides of triangle:-");
        scanf("%d %d %d",&x,&y,&z);
         if (x*x+y*y==z*z || x*x==y*y+z*z || x*x+z*z==y*y)
           printf("Given triangle is an right angled triangle");
          else
          printf("Given triangle is not an right angled triangle");
           break;

case 3: printf("Enter the length of sides of triangle:-");
        scanf("%d %d %d",&x,&y,&z);
      if (x==y && y==z)
           printf("Given triangle is an equilateral triangle");
          else
          printf("Given triangle is not an equlateral triangle");
           break;

case 4: printf("Exit");

           break;
 }
 return 0;
}
