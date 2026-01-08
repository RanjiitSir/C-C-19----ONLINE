#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Stud
{
    int RNo;
    char Name[40];
    long long int MobNo;
    float Per;
};

int main( )
{
    struct Stud S1 = {};

    printf("\n Student Details Are => \n");

    printf("\n Roll No    : %d.", S1.RNo);
    printf("\n Name       : %s.", S1.Name);
    printf("\n Mobile No  : %lld.", S1.MobNo);
    printf("\n Percentage : %f.", S1.Per);

    getch();
    return 0;
}
