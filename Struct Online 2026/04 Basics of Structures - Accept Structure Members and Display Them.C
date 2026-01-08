#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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

    printf("\n Enter Student Details => \n");

    printf("\n Enter Students Roll Number : ");
    scanf("%d",&S1.RNo);

    fflush(stdin);

    printf("\n Enter Students Name : ");
    gets(S1.Name);      ///scanf("%s",&S1.Name);

    printf("\n Enter Students Mobile Number : ");
    scanf("%lld",&S1.MobNo);

    printf("\n Enter Students Percentage : ");
    scanf("%f",&S1.Per);

    printf("\n\n Entered Student Details Are => \n");

    printf("\n Roll No    : %d.", S1.RNo);
    printf("\n Name       : %s.", S1.Name);
    printf("\n Mobile No  : %lld.", S1.MobNo);
    printf("\n Percentage : %f.", S1.Per);

    getch();
    return 0;
}
