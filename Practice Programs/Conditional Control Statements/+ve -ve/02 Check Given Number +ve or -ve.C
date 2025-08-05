/// Check Given Number +ve or -ve
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    if(No == 0)
    {
        printf("\n Zero is neither a negative or a positive number.");
    }
    else if( No > 0 )
    {
        printf("\n Given Number %d is Positive.", No);
    }
    else
    {
        printf("\n Given Number %d is Negative.", No);
    }

    getch();
    return 0;
}
