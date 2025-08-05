/// Check Given Number +ve or -ve
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    (No == 0) ? printf("\n Neutral.") : ( ( No > 0 ) ? printf("\n %d is Positive.", No) : printf("\n %d is Negative.", No) ) ;

    getch();
    return 0;
}
