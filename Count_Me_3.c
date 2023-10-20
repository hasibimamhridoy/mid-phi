#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int uppercase = 0;
        int lowercase = 0;
        int digit = 0;

        char inputString[10001];
        scanf("%s", inputString);

        for (int i = 0; i < strlen(inputString); i++)
        {

            if (inputString[i] >= 'a' && inputString[i] <= 'z')
            {
                lowercase++;
            }
            else if (inputString[i] >= 'A' && inputString[i] <= 'a')
            {
                uppercase++;
            }
            else
            {
                digit++;
            }

        }

        printf("%d %d %d\n", uppercase, lowercase, digit);
    }

    return 0;
}
