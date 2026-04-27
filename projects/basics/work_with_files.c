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
