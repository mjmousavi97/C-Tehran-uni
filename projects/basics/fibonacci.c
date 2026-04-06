// #include <stdio.h>
// int fibonacci(int);

// int main()
// {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("%d", fibonacci(num));

//     return 0;
// }

// int fibonacci(int n)
// {
//     if (n==1)
//     {
//         return 0;
//     }
//     else if (n==2)
//     {
//         return 1;
//     }
//     else
//     {
//         return (fibonacci(n-1) + fibonacci(n-2));
//     }  
// }
// ----------------------------------------------------------------------------
// #include <stdio.h>
// int fib(int n);

// int main()
// {
//     int fibo, n;

//     printf("Enter a number:");
//     scanf("%d", &n);
//     fibo = fib(n);
//     printf("%d" ,fibo);
// }

// int fib(int n)
// {
//     int n1=0, n2=1, c;

//     if (n==1)
//     {
//         return 0;
//     }
//     else if (n==2)
//     {
//         return 1;
//     }
//     else
//     {
//         for (int i = 1; i <= n-2; i++)
//         {
//             c = n1 + n2;
//             n1 = n2; 
//             n2 = c;
//         }
        
//         return c;
//     }   
// }
//-------------------------------------------------------------------
#include <stdio.h>
int fibo(int);

int main()
{
    int n, fib;
    printf("Enter a number: ");
    scanf("%d", &n);
    fib = fibo(n);

    printf("Fibonacci of %d is: %d", n, fib);

    return 0;
}

int fibo(int n)
{
    int num[n];
    num[0] = 0;
    num[1] = 1;

    for (int i = 2; i < n; i++)
    {
        num[i] = num[i-1] + num[i-2];
    }

    return (num[n-1]);
    
}
