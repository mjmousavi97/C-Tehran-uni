/*
- Bitwise:
^ xor
~ not
| or
& and
*/

// i++ : i += 1 : i = i + 1
// i-- : as the same above
// a = i++ : a = i  and i++
// a = ++i : i++ and c = i++

// type casting char < int < float < double
// int c = 5; --> (float)c --> c : float
// -------------------------------------------------------------------------------------
#include<stdio.h>

int main()
{
    int a, b, i = 4;
    a = i++;
    b = ++i;

    printf("a = %d, b = %d, i = %d \n", a, b, i);

    return 0;
}
// ----------------------------------------------------------------------------------------