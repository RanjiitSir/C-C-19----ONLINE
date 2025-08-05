/// Check Given Number Even Or Odd.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    if((No % 2) == 0 )
    {
        printf("\n Given Number %d is EVEN.", No);
    }
    else
    {
        printf("\n Given Number %d is ODD.", No);
    }

    getch();
    return 0;
}
