/// Maximum From 2 Numbers - Using if else.C
#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0;

        printf("\n Enter 1st Number = ");
        scanf("%d",&Num1);
        printf("\n Enter 2nd Number = ");
        scanf("%d",&Num2);

        if(Num1 > Num2)
        {
                printf("\n 1st Number %d is Maximum.",Num1);
        }
        else
        {
                printf("\n 2nd Number %d is Maximum.",Num2);
        }

        printf("\n Thanks!!!");

        getch();
        return 0;
}
