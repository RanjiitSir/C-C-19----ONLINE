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
    struct Stud S1 = {}, S2 = {}, S3 = {};

    printf("\n Enter 1st Student Details => \n");

    printf("\n Enter Students Roll Number : ");
    scanf("%d",&S1.RNo);

    fflush(stdin);

    printf("\n Enter Students Name : ");
    gets(S1.Name);

    printf("\n Enter Students Mobile Number : ");
    scanf("%lld",&S1.MobNo);

    printf("\n Enter Students Percentage : ");
    scanf("%f",&S1.Per);

    /// ///////////////////////////////////////////////////////////////////

    printf("\n Enter 2nd Student Details => \n");

    printf("\n Enter Students Roll Number : ");
    scanf("%d",&S2.RNo);

    fflush(stdin);

    printf("\n Enter Students Name : ");
    gets(S2.Name);

    printf("\n Enter Students Mobile Number : ");
    scanf("%lld",&S2.MobNo);

    printf("\n Enter Students Percentage : ");
    scanf("%f",&S2.Per);

    /// ///////////////////////////////////////////////////////////////////

    printf("\n Enter 3rd Student Details => \n");

    printf("\n Enter Students Roll Number : ");
    scanf("%d",&S3.RNo);

    fflush(stdin);

    printf("\n Enter Students Name : ");
    gets(S3.Name);

    printf("\n Enter Students Mobile Number : ");
    scanf("%lld",&S3.MobNo);

    printf("\n Enter Students Percentage : ");
    scanf("%f",&S3.Per);

    /// //////////////////////////////////////////////////////

    printf("\n Enter Any Key To See All Details : ");
    getch();

    system("cls");

    printf("\n\n Entered 3 Students Details Are => \n\n");

    printf("\n Roll No    : %d.", S1.RNo);
    printf("\n Name       : %s.", S1.Name);
    printf("\n Mobile No  : %lld.", S1.MobNo);
    printf("\n Percentage : %f.", S1.Per);
    printf("\n\n ============== *** ==============\n");

    printf("\n Roll No    : %d.", S2.RNo);
    printf("\n Name       : %s.", S2.Name);
    printf("\n Mobile No  : %lld.", S2.MobNo);
    printf("\n Percentage : %f.", S2.Per);
    printf("\n\n ============== *** ==============\n");

    printf("\n Roll No    : %d.", S3.RNo);
    printf("\n Name       : %s.", S3.Name);
    printf("\n Mobile No  : %lld.", S3.MobNo);
    printf("\n Percentage : %f.", S3.Per);
    printf("\n\n ============== *** ==============\n");

    getch();
    return 0;
}
