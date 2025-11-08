#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a char: \n");
    ch = getchar();
    ch = (ch >= 'a' && ch <= 'z') ? (ch - 32) : ch;

    printf("ch: %c \n", ch);

    return 0;
}