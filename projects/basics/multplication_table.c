#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d \t", i * j);

            // if (j==10)
            // {
            //     printf("\n");
            // }
            
        }
        printf("\n");
    }
    
}