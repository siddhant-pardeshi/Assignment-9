//Write a program which takes the day number of a week and displays a unique greeting message for the day.include <stdio.h>

int main()
{
int m,x,y;

printf("Enter day number:-");
scanf("%d",&m);


switch(m)
 {
 case 1: printf("Today is Monday");

           printf("Smile. It irritates those who wish to destroy you");
           break;

case 2: printf("Today is Tuesday");

          printf("Half of our mistakes in life arises from feeling where we ought to think, and thinking where we ought to feel.");
           break;

case 3: printf("Today is Wednesday");

          printf("It hurts when you have someone in your heart but not in your arms");
           break;

case 4: printf("Today is Thursday");

           printf("Love is what makes you smile when you’re tired.");
           break;

case 5: printf("Today is Friday\n We find out how strong we really are, not when things are going well, but when they are not.");

           break;

case 6: printf("Today is Saturday\nSuccess is simple. Do what’s right, the right way, at the right time");

           break;
}
return 0;
}
