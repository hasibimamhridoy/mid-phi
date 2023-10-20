#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int previousWorker, newWorkerAdded, daysRemaining;
        scanf("%d %d %d", &previousWorker, &newWorkerAdded, &daysRemaining);

        int totalWorkers = previousWorker + newWorkerAdded;
        
        int totalDays = (daysRemaining * previousWorker) / totalWorkers;
        int finalDays = daysRemaining - totalDays;
        printf("%d\n",finalDays);



    }

    return 0;
}
