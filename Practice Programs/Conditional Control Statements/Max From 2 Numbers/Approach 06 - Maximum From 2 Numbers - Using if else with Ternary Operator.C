/// Maximum From 2 Numbers - Using if else with Ternary Operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0;

    Accept:
        printf("\n Enter 2 Integer Numbers To Find Max from them => ");
        printf("\n Enter 1st Number = ");
        scanf("%d",&Num1);
        printf("\n Enter 2nd Number = ");
        scanf("%d",&Num2);

    if(Num1 == Num2)
    {
            printf("\n Both Numbers are Equal.");
            printf("\n=============================*******=============================");
            goto Accept;
    }

    ///   (Condition) ? True Statement : False Statement;

    (Num1 > Num2) ? printf("\n Given 1st Number %d is Maximum.",Num1) : printf("\n Given 2nd Number %d is Maximum.",Num2);

    printf("\n Thanks!!!");

    getch();
    return 0;
}
