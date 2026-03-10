// input --> program --> outut. 
// Two way to express algorithms: 1) Flow Chart     2) Pseudo code
/*
we need to read data from devices(keyboard, mouse, file and etc.)
we need to write data(monitor and etc.)
*/

// printf("output format", data)
// ______________________________________________________________________________
/*
#include<stdio.h>

int main()
{
    int x = 65;
    float y = 3.1;
    printf("This is a test!\n");
    printf("This is another test!\n");   
    printf("(%d)\n", 5);
    printf("(%c)\n", 65);
    printf("(%d, %c)\n", 65, 65);
    printf("(%d, %c)\n", x, x);
    printf("(%f)\n", y);
    printf("(%2.2f)\n", y);
    return 0;
}
*/
// _____________________________________________________________________________________
/*
#include<stdio.h>

int main()
{
    int a;
    float b;
    printf("Please enter input a and b:");
    scanf("%d %f", &a, &b);
    printf("a: %d\tb: %f \n", a, b);

    printf("Address of x is: %p \n", &a);

    return 0;
}
*/
// ______________________________________________________________________________________
// c = getchar(); --> scanf("%c", &c)
// putchar(c); --> printf("%c", c)

// gets(str);
// puts(str);
/*
#include<stdio.h>

int main()
{
    char name[100];
    printf("Please enter your name:");
    gets(name);
    // puts(name);
    printf("Hello %s", name);
    print("/n");

    return 0;
}
*/
// ______________________________________________________________________________________
#include<stdio.h>

int main()
{
    int current_year = 1404;
    int birth_year;
    int age;
    int remained;

    printf("This program is designed to calculate current age and show how many years are left until you turn 100! \n");
    printf("Enter your birth year: \n");
    scanf("%d", &birth_year);
    
    age = current_year - birth_year; 
    remained = 100 - age;

    printf("Your age is: %d \n", age);
    printf("You will be 100 years old in %d years!", remained);
    
    return 0;

}

