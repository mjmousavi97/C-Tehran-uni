#include <stdio.h>

int main()
{
    int x,y, sum=0;

    printf("Enter two number:");
    scanf("%d %d", &x, &y);

    for (int i = 0; i < x; i++)
    {
        sum +=y;
    }

    printf("%d * %d = %d", x, y, sum);

    return 0;
    
}