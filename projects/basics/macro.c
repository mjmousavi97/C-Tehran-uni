#ifndef PI
#define PI 3.14
#endif

#define pow2(x) (x * x)

#include <stdio.h>

int main(){
    float r, a;

    printf("Enter the radious: ");
    scanf("%f", &r);
    a = PI * pow2(r);
    printf("The area of circle with r = %f is: %f", r, a);

    return 0;
}