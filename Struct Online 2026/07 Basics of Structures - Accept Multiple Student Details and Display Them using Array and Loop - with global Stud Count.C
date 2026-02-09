#include<stdio.h>
#include<conio.h>

int SCount = 3;

struct Stud
{
    int RNo;
    char Name[40];
    long long int MobNo;
    float Per;
};

int main( )
{
    int i = 0;
    struct Stud Std[SCount] = {};        ///  NOT ALLOWED As Array Size Can't be Variable - Means it should be fix

    for(i = 0; i < SCount; i++)          /// Accept All 3 Student Details With Loop
    {
        printf("\n Enter Student No %d Details => \n", i+1);

        printf("\n Enter Students Roll Number : ");
        scanf("%d",&Std[i].RNo);

        fflush(stdin);

        printf("\n Enter Students Name : ");
        gets(Std[i].Name);

        printf("\n Enter Students Mobile Number : ");
        scanf("%lld",&Std[i].MobNo);

        printf("\n Enter Students Percentage : ");
        scanf("%f",&Std[i].Per);
    }

    printf("\n Enter Any Key To See All Details : ");
    getch();

    printf("\n\n Entered %d Students Details Are => \n\n", SCount);

    for(i = 0; i < SCount; i++)
    {
        printf("\n Roll No    : %d.", Std[i].RNo);
        printf("\n Name       : %s.", Std[i].Name);
        printf("\n Mobile No  : %lld.", Std[i].MobNo);
        printf("\n Percentage : %f.", Std[i].Per);
        printf("\n\n ============== *** ==============\n");
    }

    getch();
    return 0;
}
