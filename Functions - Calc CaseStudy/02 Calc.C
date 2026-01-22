#include<stdio.h>
#include<conio.h>

int Add(int, int);
int Subtract(int, int);
int Multiply(int, int);
int Division(int, int);
int Modulo(int, int);


int main()
{
    int N1 = 0, N2 = 0;

    printf("\n Welcome To Fork Calculator => \n");

    printf("\n Enter 1st Number: ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number: ");
    scanf("%d",&N2);

    printf("\n Addition : %d + %d = %d.", N1, N2, Add(N1,N2));

    printf("\n Subtraction : %d - %d = %d.", N1, N2, Subtract(N1 ,N2));

    printf("\n Multiplication : %d * %d = %d.", N1, N2, Multiply(N1 ,N2));

    printf("\n Division : %d / %d = %d.", N1, N2, Division(N1 ,N2));

    printf("\n Remainder : %d %% %d = %d.", N1, N2, Modulo(N1 ,N2));

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
