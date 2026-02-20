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

void Accept_Student_Details(struct Stud *, int );
void Display_Student_Details(struct Stud *, int );

int main( )
{
    int SCount = 0;
    struct Stud *StdPtr = NULL;

    printf("\n Enter How Many Student Details Do You Have : ");
    scanf("%d",&SCount);

    StdPtr = (struct Stud*) malloc (SCount * sizeof(struct Stud));

    Accept_Student_Details(StdPtr, SCount);

    printf("\n Enter Any Key To See All Details : ");
    getch();

    printf("\n\n Entered %d Students Details Are => \n\n", SCount);

    Display_Student_Details(StdPtr, SCount);

    getch();
    return 0;
}

void Accept_Student_Details(struct Stud *SPtr, int SCnt)
{
    int i = 0;

    for(i = 0; i < SCnt; i++)
    {
        printf("\n Enter Student Roll No %d Details => \n", i+101);
        SPtr[i].RNo = i + 101;
        fflush(stdin);

        printf("\n Enter Students Name : ");
        gets(SPtr[i].Name);

        printf("\n Enter Students Mobile Number : ");
        scanf("%lld",&SPtr[i].MobNo);

        printf("\n Enter Physics Marks : ");
        scanf("%d",&SPtr[i].Phy);

        printf("\n Enter Chemistry Marks : ");
        scanf("%d",&SPtr[i].Chem);

        printf("\n Enter Mathematics Marks : ");
        scanf("%d",&SPtr[i].Maths);

        SPtr[i].Tot = SPtr[i].Phy + SPtr[i].Chem + SPtr[i].Maths;

        SPtr[i].Per = SPtr[i].Tot / 3.0;
    }

    return;
}

void Display_Student_Details(struct Stud *SPtr, int SCnt)
{
    int i = 0;

    for(i = 0; i < SCnt; i++)
    {
        printf("\n Roll No       : %d.", SPtr[i].RNo);
        printf("\n Name          : %s.", SPtr[i].Name);
        printf("\n Mobile No     : %lld.", SPtr[i].MobNo);

        printf("\n\n Marks    =>\n\tPhysics = %d,\tChemistry = %d,\tMaths = %d.",SPtr[i].Phy, SPtr[i].Chem, SPtr[i].Maths);

        printf("\n\n Total Marks : %d.", SPtr[i].Tot);
        printf("\t Percentage    : %0.2f.", SPtr[i].Per);

        printf("\n\n ============== *** ==============\n");
    }

    return;
}
