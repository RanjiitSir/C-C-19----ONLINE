#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int RNo;
    char Name[40];
    long long int MobNo;
    int Phy;
    int Chem;
    int Maths;
    int Tot;
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
        printf("\n Enter Student Roll No %d Details => \n", i+101);
        StdPtr[i].RNo = i + 101;
        fflush(stdin);

        printf("\n Enter Students Name : ");
        gets(StdPtr[i].Name);

        printf("\n Enter Students Mobile Number : ");
        scanf("%lld",&StdPtr[i].MobNo);

        printf("\n Enter Physics Marks : ");
        scanf("%d",&StdPtr[i].Phy);

        printf("\n Enter Chemistry Marks : ");
        scanf("%d",&StdPtr[i].Chem);

        printf("\n Enter Mathematics Marks : ");
        scanf("%d",&StdPtr[i].Maths);

        StdPtr[i].Tot = StdPtr[i].Phy + StdPtr[i].Chem +StdPtr[i].Maths;

        StdPtr[i].Per = StdPtr[i].Tot / 3.0;
    }

    printf("\n Enter Any Key To See All Details : ");
    getch();

    printf("\n\n Entered %d Students Details Are => \n\n", SCount);

    for(i = 0; i < SCount; i++)
    {
        printf("\n Roll No       : %d.", StdPtr[i].RNo);
        printf("\n Name          : %s.", StdPtr[i].Name);
        printf("\n Mobile No     : %lld.", StdPtr[i].MobNo);

        printf("\n\n Marks    =>\n\tPhysics = %d,\tChemistry = %d,\tMaths = %d.",StdPtr[i].Phy, StdPtr[i].Chem, StdPtr[i].Maths);

        printf("\n\n Total Marks : %d.", StdPtr[i].Tot);
        printf("\t Percentage    : %0.2f.", StdPtr[i].Per);
        printf("\n\n ============== *** ==============\n");
    }

    getch();
    return 0;
}
