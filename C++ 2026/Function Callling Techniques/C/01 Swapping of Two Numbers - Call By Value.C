#include<stdio.h>
#include<conio.h>

void Swap(int, int);

int  main()
{
    int N1 = 0, N2 = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    printf("\n\n Before Swap => Number1 = %d, Number2 = %d.", N1, N2);

    Swap(N1, N2);

    printf("\n\n After Swap => Number1 = %d, Number2 = %d.", N1, N2);

    getch();
    return 0;
}

void Swap(int No1, int No2)
{
    int Temp = 0;

    printf("\n Inside Swap Function...\n");

    Temp = No1;
    No1 = No2;
    No2 = Temp;
}
