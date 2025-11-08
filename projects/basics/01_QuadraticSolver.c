#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2, delta;

    printf("Please enter a, b, c as the three coefficients of the quadratic equation. \n");
    scanf("%d %d %d", &a, &b, &c);
    delta = (b * b) - (4 * a * c);
    
    if (a == 0){
        printf("Note a quadratic equation!. \n");

        return 0;
    }

    if (delta >= 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("The roots x1 and x2 are equal to: %.2f  %.2f", x1, x2);
    }
    else{
        printf("No real solution! \n");
    }

    return 0;
}