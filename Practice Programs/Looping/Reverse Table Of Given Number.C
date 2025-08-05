/// Reverse Multiplication Table of given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);            /// 21

    printf("\n Reverse Table of %d is =>\n", No);

    for(i = 10; i >= 1; i--)
    {
        printf("\n %3d * %3d = %3d.", No, i, (No * i));
    }

    printf("\n ****************************** \n");

    getch();
    return 0;
}
