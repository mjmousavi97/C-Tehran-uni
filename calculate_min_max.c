#include <stdio.h>
void min_max(int x, int y, int *minimum, int*maximum)
{
    if (x<y)
    {
        *minimum = x;
        *maximum = y;
        printf("The minimum of %d and %d is: %d and the maximum is: %d.", x, y, *minimum, *maximum);

        return;
    }
    else if (x==y)
    {
        printf("%d is equal to %d", x, y);

        return;
    }
    else
    {
        *minimum = y;
        *maximum = x;
        printf("The minimum of %d and %d is: %d and the maximum is: %d.", x, y, *minimum, *maximum);

        return;
    }
    
}

void main()
{
    int a, b;
    int min, max;

    printf("Enter two number(int): \n");
    scanf("%d %d", &a, &b);

    min_max(a, b, &min, &max);

    return;
}