#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ascending(int a, int b){
    return (a > b);
}

bool descending(int a, int b){
    return (a < b);
}

void bubble_sort(int *A, int len, bool (*pointer_function)(int, int)){
    int c;

    for (int i = 1; i < len; i++){
        for (int j = 0; j < (len - i); j++){
            if ((pointer_function)(A[j], A[j+1])){
                c = A[j];
                A[j] = A[j+1];
                A[j+1] = c;
            }
        }
    }

    return;
}


int main(){
    int len, sort;

    printf("Enter length of array: ");
    scanf("%d", &len);

    int *A = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++){
        printf("A[%d] = \n", i);
        scanf("%d", &A[i]);
    }

    printf("Enter ascending: 1 or descending: 2: ");
    scanf("%d", &sort);

    if (sort == 1){
        bubble_sort(A, len, ascending);
    }
    else{
        bubble_sort(A, len, descending);
    }

    for (int i = 0; i < len; i++){
        printf("A[%d] = %d \n", i, A[i]);
    }

    free(A);

    return 0;
}