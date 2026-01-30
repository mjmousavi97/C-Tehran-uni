#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int);

int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if (is_palindrome(num))
    {
        printf("Your number is palindrome!");
    }
    else
    {
        printf("Your number is not palindrom!");
    }

    return 0;
    
}

bool is_palindrome(int a)
{   
    int cp = a, remind, reverse=0;

    while (cp !=0)
    {   
        remind =  cp % 10;
        cp = cp / 10;
        reverse = 10*reverse + remind;        
    }

    if (reverse == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}