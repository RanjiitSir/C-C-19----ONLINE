// Maximum From 2 Numbers - Using if else.C
#include<stdio.h>
#include<conio.h>

int main()
{
        int Num1 = 0, Num2 = 0;

        printf("\n Enter 2 Integer Numbers To Find Max from them : ");
        scanf("%d%d",&Num1,&Num2);

        if(Num1 == Num2)
        {
                printf("\n Both Numbers are Equal.");
                goto BYE;
        }

        if(Num1 > Num2)
        {
                printf("\n Given 1st Number %d is Maximum.",Num1);
        }
        else
        {
                printf("\n Given 2nd Number %d is Maximum.",Num2);
        }

        BYE:
            printf("\n\n Thanks!!!");

            _getch();
            return 0;
}
