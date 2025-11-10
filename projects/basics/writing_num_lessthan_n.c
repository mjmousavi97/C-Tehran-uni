/*
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number! \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }
    
    return 0;
}
*/
// -------------------------------------------------
/*
#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a number! \n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    
}
*/
// ---------------------------------------------------
#include <stdio.h>

int main()
{
    int n, i=1;
    printf("Enter a number! \n");
    scanf("%d", &n);

    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= n);
    
}