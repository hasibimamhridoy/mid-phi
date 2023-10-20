#include <stdio.h>

int main()
{
    int arrSize;
    scanf("%d", &arrSize);
    int arr[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sumOnyTwo = 0;
    int sumOnyThree = 0;
    ;
    for (int i = 0; i < arrSize; i++)
    {

        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            sumOnyTwo += 1;
        }
        else if (arr[i] % 2 == 0)
        {
            sumOnyTwo += 1;
        }
        else if (arr[i] % 3 == 0)
        {
            sumOnyThree += 1;
        }
        
    }

    printf("%d %d", sumOnyTwo, sumOnyThree);

    return 0;
}
