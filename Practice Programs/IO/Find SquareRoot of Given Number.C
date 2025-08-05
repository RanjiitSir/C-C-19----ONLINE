/// SquareRoot of given Number
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int No = 0, SqrRoot = 0;

    printf("\n Enter an Integer Number To Get its SquareRoot : ");
    scanf("%d",&No);

    SqrRoot = sqrt(No);

    printf("\n Square Root of %d = %d.", No, SqrRoot);

    printf("\n ==================== \n");

    getch();
    return 0;
}

