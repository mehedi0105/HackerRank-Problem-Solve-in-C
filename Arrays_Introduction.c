#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int demo = 0;
    int i = 0, j = 0;
    while (i < j)
    {
        demo = arr[i];
        arr[i] = arr[j];
        arr[j] = demo;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", &arr[i]);
    }

    return 0;
}