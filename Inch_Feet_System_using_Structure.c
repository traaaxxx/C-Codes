//program to add two distances (in inch-feet system) using structure

#include <stdio.h>
struct Distance 
{
   int feet;
   float inch;
} d1, d2, result;

int main() 
{
   printf("Enter 1st Distance\n\n");
   printf("Enter Feet - ");
   scanf("%d", &d1.feet);
   printf("Enter Inch - ");
   scanf("%f", &d1.inch);

   printf("\n\nEnter 2nd Distance\n\n");
   printf("Enter Feet - ");
   scanf("%d", &d2.feet);
   printf("Enter Inch - ");
   scanf("%f", &d2.inch);

   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   while (result.inch >= 12.0) 
   {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of Distances = %d\'%.1f\"", result.feet, result.inch);
   printf("\n");
   
   return 0;
}
