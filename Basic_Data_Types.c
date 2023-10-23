#include <stdio.h>
int main()
{
    int arr;
    long long int arr2;
    char ch;
    float flo;
    double fds;
    scanf("%d %lld %c %f %lf", &arr, &arr2, &ch, &flo, &fds);
    printf("%d\n%lld\n%c\n%.3f\n%.9lf\n", arr, arr2, ch, flo, fds);
    return 0;
}