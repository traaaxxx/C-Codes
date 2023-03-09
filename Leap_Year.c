//program to determine whether a year entered is a leap year or not

#include <stdio.h>
int main() 
{
   int year;
   printf("Enter a Year: ");
   scanf("%d", &year);

   //leap year if perfectly divisible by 400
   if (year % 400 == 0) 
   {
      printf("%d is a Leap Year", year);
   }
   
   //leap year if divisible by 4
   else if (year % 4 == 0) 
   {
      printf("%d is a Leap Year", year);
   }
   
   //not a leap year if divisible by 100 but not divisible by 400
   else if (year % 100 == 0) 
   {
      printf("%d is not a Leap Year", year);
   }
   
   else 
   {
      printf("%d is not a Leap Year", year);
   }

   return 0;
}