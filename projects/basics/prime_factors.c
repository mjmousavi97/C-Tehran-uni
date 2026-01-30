#include <stdio.h>
#include <math.h>  

int main()
{
    int num, i=2, x, isprime=1;

    printf("Enter an integer number:");
    scanf("%d", &num);
    x = num;

    for(i; i <= num/2;)
    {
        if ((x % i)==0)
        {
            printf("%d \t", i);
            isprime = 0;
            x /= i; 
            continue;
        }
        i++;
    }

    if (isprime)
    {
        printf("Your number is prime!");
    }
    
    return 0;
}