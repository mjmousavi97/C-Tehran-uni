// #include <stdio.h>

// struct TIME{
//     int hour;
//     int minute;
//     int second;
// };
// typedef struct TIME Time;

// int to_sec(Time t){
//     int secs;
//     secs = (t.hour * 60 * 60) + (t.minute * 60) + (t.second);
    
//     return secs;
// }

// void main(){
//     Time time;
//     int seconds;

//     printf("Enter hour(int), minutes(int) and seconds(int), please: ");
//     scanf("%d %d %d", &time.hour, &time.minute, &time.second);

//     seconds = to_sec(time);
//     printf("seconds is : %d", seconds);

//     return;
// }
// --------------------------------------------------------------------------------------
// #include <stdio.h>

// struct TIME{
//     int h;
//     int m;
//     int s;
// };
// typedef struct TIME Time;

// struct DATE{
//     int y;
//     int m;
//     int d;
// };
// typedef struct DATE Date;


// void PrintTime(Time t){
//     printf("Time is: %d:%d:%d \n", t.h, t.m, t.s);

//     return;
// }


// void NextSecond(Time t, void (*print_func)(Time)){
//     t.s ++;
//     if (t.s == 60){
//         t.s = 0;
//         t.m ++;

//         if (t.m == 60){
//             t.m = 0;
//             t.h ++;

//             if (t.h == 24){
//                 t.h = 0;
//             }
//         }
//     }

//     (print_func)(t);
// }


// void main(){
//     Time time;

//     printf("Enter hour(int), minutes(int) and seconds(int), please: ");
//     scanf("%d %d %d", &time.h, &time.m, &time.s);

//     PrintTime(time);
//     NextSecond(time, PrintTime);

//     return;
// }

// Time T = {5, 59, 59};
// Date D = {14, 12, 25};
//-----------------------------------------------------------------------------------

