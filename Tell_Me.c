#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int n;
        long long int x;
        scanf("%lld", &n);
        int arr[100001];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        scanf("%lld", &x);

        int resultYes = 0;

        for (int z = 0; z < n; z++)
        {

            if (arr[z] == x)
            {
                resultYes = 1;
            }
            else
            {
                
            }
        }

        for (int i = 0; i < t; i++)
        {
            if (resultYes > 0)
            {
                printf("YES\n");
                break;
            }

            else
            {
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}
