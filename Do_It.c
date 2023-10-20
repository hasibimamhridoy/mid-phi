#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int result[10001];
    for (int i = 0; i < n; i++)
    {

        for (int i = 1; i <= k; i++)
        {
            result[i] = i;
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}
