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
    int i = 0, SCount = 0;
    struct Stud *StdPtr = NULL;

    printf("\n Enter How Many Student Details Do You Have : ");
    scanf("%d",&SCount);

    StdPtr = (struct Stud*) malloc (SCount * sizeof(struct Stud));

    for(i = 0; i < SCount; i++)          /// Accept All 3 Student Details With Loop
    {
        printf("\n Enter Student No %d Details => \n", i+1);

        printf("\n Enter Students Roll Number : ");
        scanf("%d",&StdPtr[i].RNo);
        fflush(stdin);

        printf("\n Enter Students Name : ");
        gets(StdPtr[i].Name);

        printf("\n Enter Students Mobile Number : ");
        scanf("%lld",&StdPtr[i].MobNo);

        printf("\n Enter Students Percentage : ");
        scanf("%f",&StdPtr[i].Per);
    }

    printf("\n Enter Any Key To See All Details : ");
    getch();

    printf("\n\n Entered %d Students Details Are => \n\n", SCount);

    for(i = 0; i < SCount; i++)
    {
        printf("\n Roll No    : %d.", StdPtr[i].RNo);
        printf("\n Name       : %s.", StdPtr[i].Name);
        printf("\n Mobile No  : %lld.", StdPtr[i].MobNo);
        printf("\n Percentage : %f.", StdPtr[i].Per);
        printf("\n\n ============== *** ==============\n");
    }

    getch();
    return 0;
}
