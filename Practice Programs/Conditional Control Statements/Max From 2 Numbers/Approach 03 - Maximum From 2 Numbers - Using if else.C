// Maximum From 2 Numbers - Using if else.C
#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0;

        printf("\n Enter 1st Number = ");
        scanf("%d",&Num1);
        printf("\n Enter 2nd Number = ");
        scanf("%d",&Num2);

        if(Num1 == Num2)
        {
                printf("\n Both Numbers are Equal.");
        }
        else if(Num1 > Num2)
        {
                printf("\n Number 1 = %d is Maximum.",Num1);
        }
        else
        {
                printf("\n Number 2 = %d is Maximum.",Num2);
        }

        printf("\n Thanks!!!");

        _getch();
        return 0;
}
