#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Add(int, int);
int Subtract(int, int);
int Multiply(int, int);
int Division(int, int);
int Modulo(int, int);

int main()
{
    char Choice = '\0';
    int N1 = 0, N2 = 0;

    while(1)
    {
        printf("\n\n ******** Welcome To Fork Calculator ******** \n");

        printf("\n Choices =>");
        printf("\n\t 1. Addition");
        printf("\n\t 2. Subtraction");
        printf("\n\t 3. Multiplication");
        printf("\n\t 4. Division");
        printf("\n\t 5. Remainder");
        printf("\n\t 6. Exit");
        printf("\n\n Enter Your Choice : ");
        Choice = getche();

        printf("\n\n ========== ******* ========== \n");

        switch(Choice)
        {
            case '1':
                printf("\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Addition : %d + %d = %d.", N1, N2, Add(N1, N2));
                getch();
                system("cls");

                break;

            case '2':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Subtraction : %d - %d = %d.", N1, N2, Subtract(N1, N2));
                getch();
                system("cls");

                break;

            case '3':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Multiplication : %d * %d = %d.", N1, N2, Multiply(N1, N2));
                getch();
                system("cls");

                break;

            case '4':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Division : %d / %d = %d.", N1, N2, Division(N1, N2));
                getch();
                system("cls");

                break;

            case '5':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Remainder : %d %% %d = %d.", N1, N2, Modulo(N1, N2));
                getch();
                system("cls");

                break;

            case '6':
                printf("\n OK then Good Bye...");
                getch();
                goto Dwn;

                break;

            default:
                printf("\n INVALID CHOICE!!!");
                getch();
                system("cls");

                break;
        }
    }

    Dwn:
        printf("\n ========== ******* ========== \n");
        printf("\n Thanks for using our calculator service!!!\n");

    getch();
    return 0;
}

int Add(int No1, int No2)
{
    int Sum = 0;

    Sum = No1 + No2;

    return Sum;
}

int Subtract(int No1, int No2)
{
    int Sub = 0;

    Sub = No1 - No2;

    return Sub;
}

int Multiply(int No1, int No2)
{
    int Mult = 0;

    Mult = No1 * No2;

    return Mult;
}

int Division(int No1, int No2)
{
    int Div = 0;

    Div = No1 / No2;

    return Div;
}

int Modulo(int No1, int No2)
{
    int Rem = 0;

    Rem = No1 % No2;

    return Rem;
}
