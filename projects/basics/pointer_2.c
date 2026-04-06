#include <stdio.h>
#include <stdlib.h>

int main(){
    int col = 3, row = 3;

    int **A = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < col; i++){
        A[i] = (int *)malloc(col * sizeof(int));
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            A[i][j] = i;
            printf("%d \n",*(*(A + i) + j));
        }
    }

    for (int i = 0; i < row; i++){
        free(*(A+i));
    }
    free(A);
    
    return 0;
}