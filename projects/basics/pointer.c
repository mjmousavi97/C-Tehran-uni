// #include <stdio.h>

// int main()
// {
//     int x = 5;
//     int *px;
//     float A[5] = {1, 2, 3, 4, 5};

//     px = &x;
//     printf("Addres of x is: %p \n", px);
//     printf("x is: %d \n", x);
//     printf("Addres of x is: %p \n", &x);
//     printf("X is: %d \n", *px);
//     printf("Addres of A is: %p \n", &A[1]);
//     printf("Size of A[0] is %ld", sizeof(A[0]));
//     return 0;
// }
// -------------------------------------------------------
// #include <stdio.h>

// void main()
// {   
//     char str[6] = "Hello";
//     char *str1 = &str;

//     str1++;
//     printf("%c", *str1);
    
//     return;
// }
// -------------------------------------------------------
// #include <stdio.h>

// void main()
// {
//     char *str1 = "Hello World";
//     char str[16];
//     char *str2 = str;


//     do
//     {
//         *str2 = *str1;
//         str1++;
//         str2++;

//     } while (*str1 != '\n');
    
//     for (int i = 0; i < 13; i++)
//     {
//         printf("%c \n", str[i]);
//     }
    

//     return ;
// }
//----------------------------------------------------------
// #include <stdio.h>

// int main()
// {
//     int A[3] = {10, 15, 20};
//     int *p = A;
//     printf("Addres of array A is: %p \n", A);
//     printf("Addres of array A[0] is: %p \n", &A[0]);
//     printf("Adress of pointer p is: %p \n", p);
//     printf("A[1] = %d (pointer) \n", *(p+1));
//     printf("A[1] = %d \n", A[1]);
//     printf("A[3] = %d (pointer) \n", *(p+3));

//     return 0;
// }
// ---------------------------------------------------------
// #include <stdio.h>

// int main()
// {
//     char *str = "Hello world";
//     // str+=2;
//     printf("%d", *(str));

//     return 0;
// }
//------------------------------------------------------------
#include <stdio.h>

int main()
{
    char *str = "Hello world";
    printf("%s", str);
    return 0;
}