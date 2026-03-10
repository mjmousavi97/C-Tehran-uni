// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int a, b, c, delta;
// float x1, x2;

//     printf("Enter a and b and c.(ax^2 + bx + c):");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a == 0)
//     {
//         printf("a must be non-zero!");
//         // break;
//     }

//     delta = (b * b) - (4 * a * c);
    
//     if (delta >= 0)
//     {
//         x1 = (-b + sqrt(delta)) / (2 * a);
//         x2 = (-b - sqrt(delta)) / (2 * a);

//         printf("x1 = %f, x2 = %f", x1, x2);
//     }
//     else
//     {
//         printf("No real answer!");
//     }
    


    
//     return 0;
// }
// _____________________________________________________________________________
// #include <stdio.h>

// int main()
// {
//     int n;

//     printf("Enter a number between 1 to 12: ");
//     scanf("%d", &n);

//     switch (n)
//     {
//     case 1:
//         printf("jenuary");
//         break;

    
    
//     default:
//         break;
//     }
// }
// ____________________________________________________________________________
// #include <stdio.h>

// int main()
// {   
//     int num = 0;
//     float sum = 0, n;

//     printf("Enter number you would like to average:  ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++)
//     {
//         printf("Enter number %d:", i);
//         scanf("%f", &n);
//         sum += n;
//     }

//     printf("________________________");
//     printf("The average is: %f", (sum / num));
    
//     return 0;
// }
// ______________________________________________________________________________
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n, i=2, isprime=1;
    
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while(i<=sqrt(n) && isprime)
//     {
//         if (n % i == 0)
//         {
//             isprime = 0;
//         }

//         i++;
//     }

//     if (isprime)
//     {
//         printf("The number %d you entered is prime!", n);
//     }
//     else
//     {
//         printf("The number %d you entered is not prime!", n);
//     }
    
// }
// ________________________________________________________________________________
// #include <stdio.h>

// int main()
// {
//     int sum=0, size_a;
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

//     size_a = sizeof(a) / sizeof(a[0]);
//     for (int i = 0; i < size_a; i++)
//     {
//         sum += a[i];
//     }

//     printf("Average of a: %f", ((float) sum / size_a));

//     return 0;
    
// }
// __________________________________________________________________________________
// #include <stdio.h>

// int main()
// {
//     int A[][3] = {{7, -2, 3}, {-2, 3, 6}, {4, 6, 7}};
//     int diff = 0;

//     for (int i = 1; i < 3; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (A[i][j] != A[j][i])
//             {
//                 diff++;
//             }
            
//         }
        
//     }
//     printf("Diff is: %2.2f %% \n", (((float) diff)/9)*100);

//     return 0;
// }
// ___________________________________________________________________________________
// #include <stdio.h>

// int main()
// {
//     int a[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
//     int b[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
//     int c[4][4];

//         for (int i = 0; i < 4; i++)
//         {
//             for (int j = 0; j < 4; i++)
//             {
//                 c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j]; 
//             }
            
//         }
        
        
    
// }
// ______________________________________________________________________________________
// #include <stdio.h>
// float area(float, float);

// int main()
// {
//     float r, pi=3.14;

//     printf("Enter r to calculate the area:");
//     scanf("%f", &r);

//     printf("The area is: %.2f", area(r, pi));

//     return 0;
// }

// float area(float r, float pi)
// {
//     return (r*r*pi);
// }
// ___________________________________________________________________________________________