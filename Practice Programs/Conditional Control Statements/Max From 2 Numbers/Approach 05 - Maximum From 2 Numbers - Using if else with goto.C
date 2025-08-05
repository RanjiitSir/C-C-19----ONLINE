// Maximum From 2 Numbers - Using if else.C
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0;

    Accept:
        printf("\n Enter 2 Integer Numbers To Find Max from them : ");
        scanf("%d%d",&Num1,&Num2);

        if(Num1 == Num2)
        {
                printf("\n Both Numbers are Equal.");
                printf("\n=============================*******=============================");

                printf("\n\n For Comparison there should be 2 Different Numbers,\n");
                goto Accept;
        }

        if(Num1 > Num2)
        {
                printf("\n Given 1st Number %d is Maximum.",Num1);
        }
        else
        {
                printf("\n Given 2nd Number %d is Maximum.",Num2);
        }

        printf("\n\n Thanks!!!");

        getch();
        return 0;
}
