/// Square of given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sqr = 0;

    printf("\n Enter a Number To Get its Square : ");
    scanf("%d",&No);

    Sqr = No * No;

    printf("\n Square of %d = %d.", No, Sqr);

    printf("\n ==================== \n");

    getch();
    return 0;
}
/*

int main()
{
    int No = 0;

    printf("\n Enter a Number To Get its Square : ");
    scanf("%d",&No);

    printf("\n Square of %d = %d.", No, (No * No));

    printf("\n ==================== \n");

    getch();
    return 0;
}

*/
