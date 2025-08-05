/// Check Given Number Even Or Odd.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    ///(Condition)    ?     TRUE STATEMENT                    :  FALSE STATEMENT ;

    ( (No % 2) == 0 ) ? printf("\n Number %d is EVEN.", No) : printf("\n Number %d is ODD.", No) ;

    getch();
    return 0;
}
