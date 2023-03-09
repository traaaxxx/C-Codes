// First Come First Serve Scheduling Algorithm

#include <stdio.h>
#include <stdlib.h>

struct FCFS
{
    int process;
    int arrival;
    int burst;
    int wait;
};

int main()
{
    int n;
    printf("Enter the number of processes - ");
    scanf("%d", &n);
    struct FCFS p[n];

    printf("\n----- Process ID, Arrival Time and Burst Time -----\n");
    for(int i = 0; i < n; i++)
    {
        printf("\nProcess ID - ");
        scanf("%d", &p[i].process);

        printf("Arrival Time - ");
        scanf("%d", &p[i].arrival);

        printf("Burst Time - ");
        scanf("%d", &p[i].burst);
    }

    int start = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(p[i].arrival == start)
            {
                p[i].wait = start;
                start = start + p[i].burst;
            }
            else
            {
                start++;
            }
        }
    }

    int sum = 0, temp = 0;
    p[0].wait = 0;
    for(int i = 0; i < n; i++)
    {
        temp = p[i].burst + temp;
        p[i + 1].wait = temp - p[i].arrival - 1;
        sum += p[i].wait;
    }
    float avg_wait = (float)sum / n;
    printf("\nAverage Waiting Time - %.2f", avg_wait);
}