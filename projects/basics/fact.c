// Non-recursive factorial

// #include <stdio.h>

// int main()
// {
//     int n, fact = 1;

//     printf("Enter a number(int): ");
//     scanf("%d", &n);

//     if (n < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     }
//     else if (n == 0) {
//         printf("%d! = 1\n", n);
//     }
//     else {
//         for (int i = 1; i <= n; i++) {
//             fact *= i;
//         }
//         printf("%d! = %d\n", n, fact);
//     }

//     return 0;
// }

//-----------------------------------------------------------------------------
// recursive factorial
#include <stdio.h>

long rec_fact(int);
int main()
{
    int n;
    long fact;
    
    printf("Enter a number:");
    scanf("%d", &n);

    printf("fact(%d): %ld", n, rec_fact(n));

    return 0;
}

long rec_fact(int n)
{
    if (n==0 || n==1)
    {
        printf()
        return 1; 
    }
    else
    {
        return (n*rec_fact(n-1));
    }
}
    //---------------------------------------------------------------------------------
// #include <stdio.h>

// long factorial(int);
// int main()
// {
//     int n;
//     long fact;
    
//     printf("Enter a number:");
//     scanf("%d", &n);

//     fact = factorial(n);
//     printf("Factorial of %d is: %ld", n, fact);

//     return 0;
// }

// long factorial(int n)
// {
//     int f =1;

//     for (int i = 1; i <= n; i++)
//     {
//         f *= i;
//     }

//     return f;
    
// }


