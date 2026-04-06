#include <stdio.h>

// int add(int a, int b){
//     return (a + b);
// }

// void main(){
//     int a, b;
    
//     printf("Enter 2 numbers(int: )");
//     scanf("%d %d", &a, &b);

//     int (*pointer_func) (int, int);
//     pointer_func = add;

//     printf("%d \n", add(a, b));
//     printf("%p \n", pointer_func);
//     printf("%d \n", (pointer_func)(a, b));

//     return;
// }
// -------------------------------------------------------------------------------
// float add(float x, float y){
//     return (x + y);
// }

// float sub(float x, float y){
//     return (x - y);
// }

// float mul(float x, float y){
//     return (x * y);
// }

// float div(float x, float y){
//     return (x / y);
// }

// void main(){
//     float a, b;
    
//     printf("Enter 2 numbers(float)");
//     scanf("%f %f", &a, &b);
    

//     float (*f[4])(float, float);
//     f[0] = add;
//     f[1] = sub;
//     f[2] = mul;
//     f[3] = div;

//     printf("%f + %f = %f \n", a, b, f[0](a, b));
//     printf("%f - %f = %f \n", a, b, f[1](a, b));
//     printf("%f * %f = %f \n", a, b, f[2](a, b));
//     printf("%f / %f = %f \n", a, b, f[3](a, b));

//     printf("%p \n", f[0]);
//     printf("%p \n", f[1]);
//     printf("%p \n", f[2]);
//     printf("%p \n", f[3]);


//     return;
// }
// -------------------------------------------------------------------------
// void MyErrorHandler(int code){
//     printf("The Error Code is: %d \n", code);

//     return;
// }

// void ErroHandler(int err, void (*func_point)(int)){
//     if (func_point==NULL){
//         printf("No Error Handler is Provided for %d \n", err);
//     }
//     else{
//         (func_point)(err);
//     }

//     return;
// }

// void main(){
//     ErroHandler(3, NULL);
//     ErroHandler(1, MyErrorHandler);

//     return;
// }
// -------------------------------------------------------------------------
#include <stdlib.h>

int SumArray(int *A, int n, int (*pointer_function)(int)){
    int sum=0;

    for (int i = 0; i < n; i++){
        if (pointer_function == NULL){
            sum += A[i];
        }
        else{
            A[i] = (pointer_function)(A[i]);
            sum += A[i];
        }
    }

    printf("Sum of Array is: %d", sum);
}

int only_pos(int a){
    if(a >= 0){
        return a;
    }
    else{
        return 0;
    }
}

int only_neg(int a){
    if(a < 0){
        return a;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    int t;

    printf("Enter length of array you would like to Enter: ");
    scanf("%d", &n);

    int *A = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        printf("A[%d] = \n", i);
        scanf("%d", &A[i]);
    }

    printf("How do you want to sum elements of array you enterd? Please enter an int(All elements: 1, Only positive elements: 2, only negetive elements: 3).");
    scanf("%d", &t);

    if (t == 1){
        SumArray(A, n, NULL);
    }
    else if (t == 2){
        SumArray(A, n, only_pos);
    }
    else{
        SumArray(A, n, only_neg);
    }
    
    free(A);

    return 0;
}