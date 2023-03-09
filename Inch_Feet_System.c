//program to add n distances given in inch-feet system using structures

#include <stdio.h>
struct Distance 
{
   int feet;
   float inch;
} dist1, dist2, r;

int main() 
{
   printf("Enter 1st Distance\n");
   printf("\nEnter Feet: ");
   scanf("%d", &dist1.feet);
   printf("Enter Inch: ");
   scanf("%f", &dist1.inch);
 
   printf("\n\nEnter 2nd Distance\n");
   printf("\nEnter Feet: ");
   scanf("%d", &dist2.feet);
   printf("Enter Inch: ");
   scanf("%f", &dist2.inch);

   r.feet = dist1.feet + dist2.feet;
   r.inch = dist1.inch + dist2.inch;

   while (r.inch >= 12.0) 
   {
      r.inch = r.inch - 12.0;
      ++r.feet;
   }
   printf("\nSum of Distances = %d\' %.1f\"", r.feet, r.inch);
   
   return 0;
}