#include <stdio.h>
int main()
{
    long long arr[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long min = 0;
    for (int i = 0; i <= 3; i++)
    {
        min = min + arr[i];
    }

    long long max = 0;
    for (int i = 1; i <= 4; i++)
    {
        max = max + arr[i];
    }
    printf("%lld %lld\n", min, max);
    return 0;
}