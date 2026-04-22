// #include <stdio.h>
// #include <string.h>

// struct DATA{
//     int i;
//     float f;
//     char str[20];
// };

// union DATA_union {
//     int i;
//     float f;
//     char str[20];
// };

// typedef union DATA_union DataUn;
// typedef struct DATA Data;

// void main(){
//     Data d;
//     DataUn du;

//     d.i = 10;
//     d.f =20.3;
//     strcpy(d.str, "Mohammad Javad");

//     du.i = 100;
//     du.f = 200.3;
//     strcpy(du.str, "Pegah");

//     printf("d.i is: %d \n", d.i);
//     printf("d.f is: %f \n", d.f);
//     printf("d.str[20] is: %s \n", d.str);

//     printf("--------------------------------- \n");

//     printf("du.i is: %d \n", du.i);
//     printf("du.f is: %f \n", du.f);
//     printf("du.str[20] is %s \n", du.str);


//     return;
// }
// --------------------------------------------------------------------------------
// #include <stdio.h>

// typedef unsigned int uint;

// struct CHANNEL{
//     uint R:8;
//     uint G:8;
//     uint B:8;
//     uint A:8;
// };
// typedef struct CHANNEL Channel;

// union COLOR {
//     uint ColorCode;
//     Channel ColorChannels;
// };

// typedef union COLOR Color;

// void main(){
//     Channel a;
//     Color m;

//     printf("Size of a(Channel) is: %lu \n", sizeof(a));
//     printf("Size of m(Color) is: %lu \n", sizeof(m));

//     m.ColorChannels.R = 255;
//     m.ColorChannels.G = 0;
//     m.ColorChannels.B = 0;
//     m.ColorChannels.A = 255;

//     printf("ColorCode of m is: %u \n", m.ColorCode);

//     return;
// }
//------------------------------------------------------------------------------
#include <stdio.h>
enum WEEK{Sat=1, Sun, Mon, Tue, Wen, Thu, Fri};
typedef enum WEEK week;

void main(){
    week wk;
    wk = sat;
    printf("sat = %d \n", wk);
    wk = sun;
    printf("Sun = %d \n", wk);

    return;
}