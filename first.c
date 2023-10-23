/*
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int sub = a - b;
    float C, D;
    scanf("%f %f", &f, &f);
    float sum1 = C + D;
    float sub1 = C - D;
    printf("%d %d \n", sum, sub);
    printf("%.1f %.1lf \n", sum1, sub1);
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("%d", sum);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("one\n");
    }
    else if (n == 2)
    {
        printf("two\n");
    }

    else if (n == 3)
    {
        printf("tree\n");
    }

    else if (n == 4)
    {
        printf("for\n");
    }

    else if (n == 5)
    {
        printf("five\n");
    }

    else if (n == 6)
    {
        printf("six\n");
    }

    else if (n == 7)
    {
        printf("seven\n");
    }

    else if (n == 8)
    {
        printf("eight\n");
    }
    else
    {
        printf("sorry");
    }
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int i, a, b;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        if (i == 1)
        {
            printf("one\n");
        }
        else if (i == 2)
        {
            printf("two\n");
        }

        else if (i == 3)
        {
            printf("three\n");
        }

        else if (i == 4)
        {
            printf("four\n");
        }

        else if (i == 5)
        {
            printf("five\n");
        }

        else if (i == 6)
        {
            printf("six\n");
        }

        else if (i == 7)
        {
            printf("seven\n");
        }

        else if (i == 8)
        {
            printf("eight\n");
        }
        else if (i == 9)
        {
            printf("nine\n");
        }
        else if (i > 9 && i % 2 == 0)
        {
            printf("even/n");
        }
        else
        {
            printf("odd\n");
        }
    }
}