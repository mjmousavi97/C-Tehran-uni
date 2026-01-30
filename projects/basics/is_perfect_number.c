#include <stdio.h>
#include <stdbool.h>

bool is_perfect(int);

int main()
{
    int num;

    printf("Enter a number(int):");
    scanf("%d", &num);

    if (is_perfect(num))
    {
        printf("The number(%d) you entered is a perfect number!", num);
    }
    else
    {
        printf("The number(%d) you entered is not a perfect number!", num);
    }


    return 0;
}

bool is_perfect(int a)
{
    int sum=1;

    for (int i = 2; i <= a/2; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
        
    }

    if (sum==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}