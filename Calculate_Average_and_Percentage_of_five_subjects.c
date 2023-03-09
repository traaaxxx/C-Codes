//program to calculate average and percentage of five subjects

#include <stdio.h>
int main()
{
    float eng, phy, chem, math, csc; 
    float total, average, percentage;
    
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &eng, &phy, &chem, &math, &csc);

    total = eng + phy + chem + math + csc;
    average = total/5;
    percentage = (total/500) * 100;

    printf("\nAverage Marks = %f", average);
    printf("\nPercentage = %f", percentage);

    return (0);
}