#include <stdio.h>
#include <stdlib.h>

// void main(){
//     int len;

//     printf("Enter the length of list: ");
//     scanf("%d", &len);
//     int A[len];
//     for (int i = 0; i < len; i++)
//     {
//         A[i] = i+1;
//         printf("%d \n", A[i]);
//     }

//     return; 
    
// }
//-------------------------------------------------
// void main(){
//     int len;

//     printf("Enter the length of list: ");
//     scanf("%d", &len);


//     int *p = (int *)malloc(len*sizeof(int));
//     for (int i = 0; i < len+1; i++)
//     {
//         *(p+i) = i+1;
//         printf("%d \n", *(p+i));
//     }
    
//     return;
// }
//--------------------------------------------------
// void main(){
//     int len;

//     printf("Enter the length of list: ");
//     scanf("%d", &len);


//     int *p = (int *)malloc(len*sizeof(int));
//     for (int i = 0; i < len; i++)
//     {
//         *(p+i) = (i+1)*(i+1);
//         printf("%d \n", *(p+i));
//     }
    
//     return;
// }
//--------------------------------------------------
#include <stdbool.h>

int main(){
    int len = 10;
    bool keyboard;

    int *A = (int *)malloc(10 * sizeof(int));

    if (A == NULL)
    {
        printf("Memory was not allocated!");
        exit(-1);
    }

    printf("%p", A);
    for (int i = 0; i < len; i++)
    {
        A[i] = (i + 1) * (i + 1);
        printf("A[%d] = %d \n", (i+1), A[i]);
    }

    printf("Would you like to change size of len? please enter 0(no) or 1(yes).");
    scanf("%d", &keyboard);

    if (keyboard == 1)
    {
        printf("Enter new size of len:");
        scanf("%d", &len);

        int *A = (int *)realloc(A, len * (sizeof(int)));
        printf("%p", A);
        for (int i = 0; i < len; i++)
        {
            A[i] = (i + 1) * (i + 1);
            printf("A[%d] = %d \n", (i+1), A[i]);
        }       
    }

    else{
        printf("Good Bye!");
    }
    
    return 0;
    
}