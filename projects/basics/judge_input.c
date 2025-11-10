#include <stdio.h>

int main()
{
    char ch;

    printf("Please enter a character: \n");
    ch = getchar();
    printf("You entered %c which is ", ch);

    if (ch >= '0' && ch <= '9'){
        printf("a digit number. \n");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("a char in lower case. \n");
    }else if (ch >= 'A' && ch <= 'Z'){
        printf("a char in upper case. \n");
    }else if (ch == ' '){
        printf("space! \n");
    }else{
        printf(" not digit, char or space! \n");
    }

    return 0;
}