#include <stdio.h>

int main()
{
    int n, num, sum = 0;
    float avg;

    printf("How many numbers do you want me to average? \n");
    scanf("%d", &n);

    for (int i = 1; i <= n ; i++)
    {
        printf("Enter number %d \n", i);
        scanf("%d", &num);
        sum += num;
    }
    
    avg = sum / n;

    printf("The average is: %.3f", avg);
}