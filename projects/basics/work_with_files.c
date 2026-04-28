// #include <stdio.h>

// int main(){
//     char *fn = "/mnt/e/c-cpp/files/file.txt";
//     int x, y;

//     FILE *fp = fopen(fn, "r");
//     if (fp == NULL){
//         printf("The file '%s' is not readable. \n", fn);

//         return (-1);
//     }

//     fscanf(fp, "%d %d", &x, &y);
//     printf("The number x is: %d and y is: %d \n", x, y);

//     fclose(fp);
//     return 0;
// }
// -------------------------------------------------------------------------
// #include <stdio.h>

// int main(){
//     char *fn = "/mnt/e/c-cpp/files/file.txt";

//     FILE *fp = fopen(fn, "w");
//     if (fp == NULL){
//         printf("The file '%s' is not readable. \n", fn);

//         return (-1);
//     }

//     fprintf(fp, "This is a test!");

//     fclose(fp);
//     return 0;
// }
// -------------------------------------------------------------------------------
// #include <stdio.h>

// int main(){
//     int a, b;
//     char *fn = "/mnt/e/c-cpp/files/file.txt";
    
//     printf("Enter two numbers(a, b): ");
//     scanf("%d %d", &a, &b);

//     FILE *fp = fopen(fn, "a");
//     if (fp == NULL){
//         printf("The file '%s' is not readable. \n", fn);

//         return (-1);
//     }

//     fprintf(fp, "\n%d %d", a, b);

//     fclose(fp);
//     return 0;
// }
//----------------------------------------------------------------------------------
#include <stdio.h>

char upper(char c){
    if (c >= 'a' & c <= 'z'){
        return (c - 32);
    }
    else{
        return c;
    }
}

int main(){
    char c;

    FILE *f1 = fopen("/mnt/e/c-cpp/files/file.txt", "r");
    FILE *f2 = fopen("/mnt/e/c-cpp/files/file2.txt", "w");

    if (f1 == NULL){
        printf("f1 is not readable!");
    }

    if (f2 == NULL){
        printf("f2 doesnt exist! please check.");
    }

    while(!feof(f1)){
        fscanf(f1, "%c", &c);
        fprintf(f2, "%c", upper(c));
    }

    fclose(f1);
    fclose(f2);
}